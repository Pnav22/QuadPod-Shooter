# Quadrapod Turret
This project, made for the Hack Club Undercity Hackathon, is a four-legged spider-bot with a turret mounted on top. Each leg consists of two servo motors, which allow for rotation in two axes. The turret has an automatic reloading and firing mechanism. The robot is controlled via Bluetooth with an Xbox controller. Made by Joel Biswas, Ayush Jaiswal, and Pranav.

## Movement
The robot consists of four legs with two joints each. One of these joints uses  an MG996R servo motor and the other uses an SG90 servo motor. The motors work together to allow the leg to rotate on two separate axes. Together, the four legs allow the robot to walk around.

## Turret
The turret mechanism consists of two N20 DC motors for flywheels and an SG90 servo motor for reloading. The turret has a vertical tube where 1 cm spherical ammunition is loaded. The servo motor pushes the ammunition into the flywheel mechanism. The flywheels spin at high speeds to shoot the ammunition out.

## Design
The prototype was designed in Onshape [here]([url](https://cad.onshape.com/documents/1f07b48c7f0c844885f208f0/w/35ef43929f689d5c59df734c/e/4c060ffb7e05090ceb09d7bd?renderMode=0&uiState=6873fecd0579b80fab54201e)). 

<img height="640" alt="SpiderCAD" src="https://github.com/user-attachments/assets/bea3b32c-5225-448c-92d8-1fc45c49b6b2" />

## Electronics
We are using an ESP32 as the micromontroller, and a 3S LiPo battery with a step dowm convertor for power.

<img height="640" alt="SpiderElectronics" src="https://github.com/user-attachments/assets/5ef90585-03eb-4e1b-be08-aa07ac92e070" />

