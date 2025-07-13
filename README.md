# Quadrapod Turret

**Quadrapod Turret** is a four-legged spider-bot equipped with a turret, created for the Hack Club Undercity Hackathon at github. Each leg has two servo motors that enable rotation across two axes, allowing the robot to walk smoothly. The turret features an automatic reloading and firing system. The entire robot is controlled wirelessly via Bluetooth using an Xbox controller.

**Creators:** Joel Biswas, Ayush Jaiswal, and Pranav Mukkara

---

## Movement

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

The mechanical prototype was modeled in Onshape and can be viewed [here](https://cad.onshape.com/documents/1f07b48c7f0c844885f208f0/w/35ef43929f689d5c59df734c/e/4c060ffb7e05090ceb09d7bd?renderMode=0&uiState=6873fecd0579b80fab54201e).

<img height="640" alt="SpiderCAD" src="https://github.com/user-attachments/assets/bea3b32c-5225-448c-92d8-1fc45c49b6b2" />

---

## Electronics

- **Microcontroller:** ESP32  
- **Power:** 3S LiPo battery paired with a step-down converter to regulate voltage

<img height="640" alt="SpiderElectronics" src="https://github.com/user-attachments/assets/5ef90585-03eb-4e1b-be08-aa07ac92e070" />


| Item Name      | Quantity |
|----------------|----------|
| MG996R servo   | 4        |
| MG996R servo   | 4        |
| Jumper wires   | 30       |
| ESP32          | 1        |
| Breadboard     | 1        |
| Buck converter | 1        |
| 12 Volt battery| 1        |

