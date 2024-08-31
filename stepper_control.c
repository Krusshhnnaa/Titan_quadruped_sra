#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "driver/ledc.h"
#include "esp_log.h"
#include "sdkconfig.h"
#include "esp_rom_sys.h"

#define GPIO_STEP    GPIO_NUM_14
#define GPIO_DIR     GPIO_NUM_12
#define STEPS_PER_REV 200  

#define TAG "NEMA23_STEPPER"

#define MIN_SPEED 50    // Minimum speed in Hz
#define MAX_SPEED 1000  // Maximum speed in Hz 
#define INIT_SPEED 100  // Initial speed in Hz
#define ACCEL_RATE 50   // Hz per second, adjust as needed

typedef struct {
    int target_pos;
    int current_pos;
    int dir;
    int speed;
} stepper_state_t;

static stepper_state_t stepper = {0, 0, 1, INIT_SPEED};

static void set_direction(int dir) {
    stepper.dir = dir;
    gpio_set_level(GPIO_DIR, dir);
    vTaskDelay(1);  
}

static esp_err_t set_speed(int speed) {
    if (speed < MIN_SPEED || speed > MAX_SPEED) {
        ESP_LOGW(TAG, "Speed %d out of range, clamping to [%d, %d]", speed, MIN_SPEED, MAX_SPEED);
        speed = (speed < MIN_SPEED) ? MIN_SPEED : MAX_SPEED;
    }
    stepper.speed = speed;
    return ledc_set_freq(LEDC_HIGH_SPEED_MODE, LEDC_TIMER_0, speed);
}

void move_to_position(int target) {
    stepper.target_pos = target;
    set_direction(target > stepper.current_pos);
    ESP_LOGI(TAG, "Moving to position %d", target);
}

static void step_motor() {
    gpio_set_level(GPIO_STEP, 1);
    esp_rom_delay_us(5); 
    gpio_set_level(GPIO_STEP, 0);
    esp_rom_delay_us(5);  
    stepper.current_pos += stepper.dir ? 1 : -1;
}

static void init_stepper(void *arg) {
    gpio_config_t io_conf = {
        .intr_type = GPIO_INTR_DISABLE,
        .mode = GPIO_MODE_OUTPUT,
        .pin_bit_mask = (1ULL<<GPIO_STEP) | (1ULL<<GPIO_DIR),
        .pull_down_en = 0,
        .pull_up_en = 0
    };
    gpio_config(&io_conf);

    ledc_timer_config_t ledc_timer = {
        .speed_mode       = LEDC_HIGH_SPEED_MODE,
        .timer_num        = LEDC_TIMER_0,
        .duty_resolution  = LEDC_TIMER_10_BIT,
        .freq_hz          = stepper.speed,
        .clk_cfg          = LEDC_AUTO_CLK
    };
    ESP_ERROR_CHECK(ledc_timer_config(&ledc_timer));

    while(1) {
        if (stepper.current_pos != stepper.target_pos) {
            int steps = abs(stepper.target_pos - stepper.current_pos);
            int current_speed = INIT_SPEED;

            for (int i = 0; i < steps; i++) {
                // Accelerate
                if (i < steps / 2 && current_speed < MAX_SPEED) {
                    current_speed += ACCEL_RATE / stepper.speed;
                }
                // Decelerate
                else if (i > steps / 2 && current_speed > INIT_SPEED) {
                    current_speed -= ACCEL_RATE / stepper.speed;
                }

                ESP_ERROR_CHECK(set_speed(current_speed));
                step_motor();

                TickType_t delay_ticks = pdMS_TO_TICKS(1000 / current_speed);
                if (delay_ticks > 0) {
                    vTaskDelay(delay_ticks);
                }
            }

            ESP_LOGI(TAG, "Reached position %d", stepper.current_pos);
        }
        vTaskDelay(10);  
    }
}

void app_main(void) {
    ESP_LOGI(TAG, "Initializing NEMA 23 stepper motor control");
    
    BaseType_t res = xTaskCreate(init_stepper, "stepper_task", 4096, NULL, 5, NULL);
    if (res != pdPASS) {
        ESP_LOGE(TAG, "Failed to create stepper task! Error: %d", res);
        return;
    }

    // Example movement pattern
    while (1) {
        move_to_position(400);   // Move 2 revolutions forward
        vTaskDelay(pdMS_TO_TICKS(5000));
        move_to_position(0);     // Return to starting position
        vTaskDelay(pdMS_TO_TICKS(5000));
    }
}
