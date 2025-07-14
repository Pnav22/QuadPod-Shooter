# Quadrapod Turret

**Quadrapod Turret** is a four-legged spider-bot equipped with a turret, created for the Hack Club Undercity Hackathon at github. Each leg has two servo motors that enable rotation across two axes, allowing the robot to walk smoothly. The turret features an automatic reloading and firing system. The entire robot is controlled wirelessly via Bluetooth using an Xbox controller.

## Demo Video
 [Watch it here on YouTube](https://www.youtube.com/shorts/YrqL98bALRE)

## Build Journal
Check out our full build log in [`journal.md`](https://github.com/Pnav22/QuadPod-Shooter/blob/main/Journal.md)


**Creators:** Joel Biswas, Ayush Jaiswal, and Pranav Mukkara

CAD                         |  IRL
:-------------------------:|:-------------------------:
![CAD Render](https://github.com/user-attachments/assets/e403affb-7970-4bed-9cbd-e9603c1d197d)  |  ![IRL Build](https://github.com/user-attachments/assets/d6193cea-4018-44f9-b0c1-3cdec59d902c)

---

## Movement Mechanism

The robot has four legs, each with two joints controlled by servo motors:

- **MG996R servo**: Controls one joint axis  
- **SG90 servo**: Controls the other joint axis

Together, these allow each leg to move in two degrees of freedom, enabling the robot to walk with stability and precision.

---

## Turret Mechanism

- Two **N20 DC motors** power the flywheels that launch ammunition.  
- An **SG90 servo motor** controls the reloading mechanism.  
- Ammunition consists of 1 cm spherical pellets loaded in a vertical tube.  
- The servo pushes ammo into the flywheels, which spin at high speed to fire the pellets.

---

## Design

Cad can be viewed [here](https://cad.onshape.com/documents/1f07b48c7f0c844885f208f0/w/35ef43929f689d5c59df734c/e/4c060ffb7e05090ceb09d7bd?renderMode=0&uiState=6873fecd0579b80fab54201e).

<img height="640" alt="SpiderCAD" src="https://github.com/user-attachments/assets/bea3b32c-5225-448c-92d8-1fc45c49b6b2" />

Read Journal.md to see our engineering process!
---


## Bill of Materials

| Item                  | Quantity |
|-----------------------|----------|
| SG90 Servo Motor      | 5        |
| MG996R Servo          | 5        |
| ESP32 DevKit C        | 1        |
| Breadboard            | 1        |
| Male to Male Jumper Wires | 30       |
| 3S LiPo Battery       | 1        |
| 12V to 5V Buck Converter | 1        |
| PLA (kgs)             | 1        |
| N20 Motor             | 2        |
| XT60 Male Connector   | 1        |

