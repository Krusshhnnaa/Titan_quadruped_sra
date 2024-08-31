# Titan_quadruped_sra
# Aim of the project: 
This project aims towards the design and the development of the robotic legs, and testing the same against the environmental constraints(different terrains), the Torque bearing capacity, the load as well as the shock bearing capabilities of the legs of a Quadruped Robot. So basically designing, manufacturing, testing, and controlling of leg for a quadruped is to be done in this Project. Further we will utilize CAD modeling software such as SOLIDWORKS, ONSHAPE, or FUSION360, depending on their preference, to assemble the quadruped meticulously.

# What is a Quadruped Robot?
A quadruped robot is a type of robot that walks on four legs, mimicking the movement and structure of four-legged animals. These robots are designed to navigate various terrains and maintain stability, making them useful for tasks that require mobility over uneven or complex surfaces. Quadruped robots are commonly used in research, exploration, rescue missions, and other applications where traditional wheeled robots may struggle to operate effectively. The development of quadruped robots involves advanced studies in areas such as robotics, biomechanics, control systems, and artificial intelligence. They often feature sophisticated sensors and algorithms to enable precise movement and adaptability to changing environments.

# Flow of the Project:
Firstly, the basic concepts of the project needs to be cleared. Quadrupped is advantageous, but how can we approach and make it? What are the pre-preparation for the same?
We just need to undergo the previous research papers on the Quadraped Robots, have a basic understanding of the mechanisms we need to drive the upper and lower leg links, get abbduction as well as adduction , have a basic knowledge of materials ,the Leg modelling and simulations as well. Then comes the manufacture part and the various tests

# Our Leg Design Iterations:
As the name suggests, the leg design is quite an essential part of the bot, and a flawed design will destablize the entire bot. This would end up hindering the functionality of the bot. To avoid this, we first went through a pen and paper phase of designing the legs, each mentee coming upn with two designs. Then, we chose a total of 3 from these, that seemed to be perfect to move forward with. The, we proceeded to create CAD models of these 3 designs.


This is what the final leg design looked like:
<img src="https://github.com/user-attachments/assets/34886ba7-2682-4b3b-aa1b-58d76763c18c" width="90%"></img>

# Analysis Of Leg Designs:
Before sending the CAD models for manufacturing, it is necessary to analyze the forces acting on the leg and their corresponding effects on it. Also, it is important to take into account the stress, strain and the resulting deformation due to these forces. For simulating this, we used a software called **Ansys**. Here, we could add the various force vectors acting on the leg and find the resulting deformation, stress and strain on the leg. 


This provides us with an insight about the potential problems that might arise after manufacturing; which would lead to economical loss. By simulating almmost realistic forces on the leg and studying the results, we can alter the design and prevent such losses.

These are the results of the Ansys analysis of the parts:
https://drive.google.com/drive/folders/1Y4_Fl7jXdLQkDFzNs7QP25U8Z40X-4TU?usp=sharing

# Torso
After the leg design, we needed a torso that would be able to support the legs, completing the body of the quadruped robot. For this, we created a simple design that would be able to be the body of the bot.

<img src="https://github.com/user-attachments/assets/525d3477-7fd6-4dbc-85f2-47d264c956c6" width="90%"></img>


# Simulation

URDF (Unified Robot Description Format) is an XML format used in ROS (Robot Operating System) to describe the physical configuration of a robot, including its joints, links, sensors, and actuators. Gazebo is a powerful robot simulation tool that integrates with ROS, providing a realistic physics engine and 3D environment for testing and developing robotic systems. When a URDF file is loaded into Gazebo, it defines the robot's physical appearance and movement, allowing the simulation to accurately represent how the robot would behave in the real world. The URDF file serves as the bridge between ROS and Gazebo, ensuring that the robot's model in the simulation matches its real-world counterpart.

The notes and Force Calculations:
https://drive.google.com/drive/folders/118oRy1_m_cqQF6-9G55y65vkjayuTp6U?usp=sharing

