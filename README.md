# Titan_quadruped_sra

# Quadruped Robot
 ![Quadruped robot](https://github.com/user-attachments/assets/b9b51691-695a-4495-afbc-0ee8cb6d6bdc)

# Aim of the project: 
This project aims towards the design and the development of the robotic legs, and testing the same against the environmental constraints(different terrains), the Torque bearing capacity, the load as well as the shock bearing capabilities of the legs of a Quadruped Robot. So basically designing, manufacturing, testing, and controlling of leg for a quadruped is to be done in this Project. Further we will utilize CAD modeling software such as SOLIDWORKS, ONSHAPE, or FUSION360, depending on their preference, to assemble the quadruped meticulously.

# What is a Quadruped Robot?
A quadruped robot is a type of robot that walks on four legs, mimicking the movement and structure of four-legged animals. These robots are designed to navigate various terrains and maintain stability, making them useful for tasks that require mobility over uneven or complex surfaces. Quadruped robots are commonly used in research, exploration, rescue missions, and other applications where traditional wheeled robots may struggle to operate effectively. The development of quadruped robots involves advanced studies in areas such as robotics, biomechanics, control systems, and artificial intelligence. They often feature sophisticated sensors and algorithms to enable precise movement and adaptability to changing environments.

# Flow of the Project:
Firstly, the basic concepts of the project needs to be cleared. Quadrupped is advantageous, but how can we approach and make it? What are the pre-preparation for the same?
We just need to undergo the previous research papers on the Quadraped Robots, have a basic understanding of the mechanisms we need to drive the upper and lower leg links, get abbduction as well as adduction , have a basic knowledge of materials ,the Leg modelling and simulations as well. Then comes the manufacture part and the various tests

# Torque Calculation:
While creating the leg, it was necessary to understand the forces that will act on each joint. For this, an equation was used, with variables for the force acting on each joint, so that they can be altered and experimented with. 
 ![Quadruped robot](https://github.com/user-attachments/assets/53b8f3d1-9b8c-4748-90d8-ff44d113d5d5)

# Gear Ratio:
The stepper motor we were using, NEMA 17, was capable of generating only 19 kgcm of torque, while we needed about 75 kgcm. So, we created a planetary gearbox that ammped up the input torque 4 times, that is, had a gear ratio of 4:1, thus helping us to convert the high speed input to a high torque output.

# PCB:
The PCB (Printed Circuit Board) is vital for controlling a quadruped robot because it:

1. **Centralizes Control**: Integrates microcontrollers, sensors, and actuators for coordinated operation.
2. **Routes Signals**: Transmits data between components, ensuring accurate communication.
3. **Distributes Power**: Supplies appropriate voltage and current to various parts of the robot.
4. **Processes Signals**: Handles data interpretation and control algorithms for real-time adjustments.
5. **Supports Compact Design**: Helps in creating a space-efficient and balanced robot.
6. **Enhances Reliability**: Provides a durable platform for components, improving overall robustness.
7. **Facilitates Integration and Maintenance**: Simplifies assembly and troubleshooting of the robot.
8. **Offers Customizability**: Allows for tailored features and enhancements based on specific needs.

In essence, the PCB is crucial for the efficient, reliable, and compact control of a quadruped robot.

