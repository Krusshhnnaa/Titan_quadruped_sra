# Titan_quadruped_sra

# What is a Quadruped Robot
A quadruped robot is a type of robot that walks on four legs, mimicking the movement and structure of four-legged animals. These robots are designed to navigate various terrains and maintain stability, making them useful for tasks that require mobility over uneven or complex surfaces. Quadruped robots are commonly used in research, exploration, rescue missions, and other applications where traditional wheeled robots may struggle to operate effectively. The development of quadruped robots involves advanced studies in areas such as robotics, biomechanics, control systems, and artificial intelligence. They often feature sophisticated sensors and algorithms to enable precise movement and adaptability to changing environments.

# My leg design Iteration:

https://github.com/user-attachments/assets/1cdd57b3-c415-47d0-bfc5-017639568480

In my initial design for power transmission, I planned to use a pulley belt mechanism. However, the system's efficiency did not meet expectations, leading to the decision to discard this iteration.
So we changed the designed into a mixture of this + a pentagon mechansim which can be seen





# My Actuator Iteration

![Screenshot (159)](https://github.com/user-attachments/assets/7fda2f94-ac23-4dca-bb35-1903a15bd995)

After reviewing my initial design in detail, I discovered several errors. The most significant issue was with power transformation, along with the presence of numerous redundant parts. I resolved these problems by making changes, guided by external references.



This is the corrected Actuator design which was implemented in the Final Assembly
![Screenshot (213)](https://github.com/user-attachments/assets/fbafbbe9-afc7-4197-9460-0fc5510bec8a)


# My torso iteration



![Screenshot (129)](https://github.com/user-attachments/assets/9de46a33-7b7f-4ccc-ba3c-cac973db8989)



The torso design was quite good overall, but we encountered a major issue when it came to assembling all the parts. Initially, we planned to join them using L-shaped clamps. However, this approach proved to be complex and introduced weak spots in the structure. Additionally, the cost of manufacturing with this method would not be reasonable, especially at this early stage of development. So we shifted to quite basic yet effective design



![Screenshot (214)](https://github.com/user-attachments/assets/f55e786e-b8a2-454d-92cf-47e52ff20b0a)


So hence we completed the Design part and now we are moving to the Robotics part


# Simulation

URDF (Unified Robot Description Format) is an XML format used in ROS (Robot Operating System) to describe the physical configuration of a robot, including its joints, links, sensors, and actuators. Gazebo is a powerful robot simulation tool that integrates with ROS, providing a realistic physics engine and 3D environment for testing and developing robotic systems. When a URDF file is loaded into Gazebo, it defines the robot's physical appearance and movement, allowing the simulation to accurately represent how the robot would behave in the real world. The URDF file serves as the bridge between ROS and Gazebo, ensuring that the robot's model in the simulation matches its real-world counterpart.










