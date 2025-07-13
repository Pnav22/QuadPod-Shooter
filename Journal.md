---
title: "QuadPod"
author: "Joel Biswas, Ayush Jaiswal, Pranav Mukkara"
description: "4-Leg Spider Robot"
created_at: "2025-07-11"
---

# QuadPod Build Log

## July 11: Excitement and Exploration

We just arrived at GitHub HQ. The place is awesome—lots of snacks and cool working spaces! We're super excited to spend the next few nights here for the hackathon.

---

## July 11: Research and Ideas

We began brainstorming ideas. One of our first concepts was a drone that acted like a hat—something like this:

<img width="350" height="364" alt="Drone Hat Concept" src="https://github.com/user-attachments/assets/77c9b01a-8813-46fd-91eb-fe02d6ac5636" />

Except this one would actually fly.

Then we narrowed our ideas down to something similar to the Mark Rober hat:

<img width="587" height="428" alt="Mark Rober Hat Inspiration" src="https://github.com/user-attachments/assets/c5567b47-06f9-44fc-9a4b-90814b883e72" />

We liked this concept but decided to keep thinking before finalizing.

Eventually, we settled on building a six-legged spider bot—something that would make people walk by and say, *"That's cool as f***." So we decided to build something like this:

<img width="427" height="347" alt="Spider Bot Inspiration" src="https://github.com/user-attachments/assets/cabbf95f-4195-4f61-97bf-923ad53b68c4" />

To make it even cooler, we decided to mount a Nerf gun on top.

We eventually decided to do only four legs in order to make it more simple. 

---

## July 11–12: Getting Started

We started the CAD work and got some basic designs going:

<img width="361" height="220" alt="Initial CAD Progress" src="https://github.com/user-attachments/assets/3713b3f5-0c17-44cc-99f3-3390ca0bf257" />

We sent the parts out to get printed. One of our biggest mistakes was spending too much time CADing without grabbing parts early. By the time we went to get motors, most of the ones we needed were gone—we were two short.
This was our **first major roadblock**. We cadded our stuff out but didnt check if the parts we needed was availbe. Someone took 8 of the motors we needed. So what we did is that 
We decided to redo the CAD to work with the motors that were still available.

Eventually we found the original motors we needed so we went back to the old cad. Shoutout to Alex for coming in clutch and giving us two extra motors from a workshop!
<img width="291" height="180" alt="image" src="https://github.com/user-attachments/assets/e6b8b61b-6d58-4796-8534-dc09a7b18025" />

<img width="1068" height="727" alt="image" src="https://github.com/user-attachments/assets/93096382-8582-4ffc-8fd5-3784095c91f8" />


---

## July 12: Setting Up the ESP32

Pranav stayed up all night (July 11–12) trying to get the ESP32 to work. He wanted to start coding but realized the board wasn't responding.

He tried multiple computers and different ESP32s, only to find out hours later that the USB wires he used didn’t support data transfer. A whole all-nighter wasted.
<img width="1728" height="983" alt="image" src="https://github.com/user-attachments/assets/ff5de96f-d122-4eae-94ad-70bd641bcb68" />
The pin guide was a absolute pain. This was our **second roadblock**. One guy spent a entire night trying to setup the esp-32 only to realize that every wire he had access to didn't data transfer. 
---

## July 12: Finalizing the CAD

We finalized the CAD and started printing and assembling.
We used the screws from the servo motor kits to assemble everything.
We printed it out and assembled.
---

## July 12: Roadblock Number 3
It turned out we messed up. Our legs which are the rectangular brackets that hold the servos was a little broken. THe tolerances were wrong and the screw didnt reach the entire way down. We didnt mesh the servos to the servo so the servo didn't move with the arm. We used a solder to heatset screws with the servo screws with the plastic. This way when the servo moved the entire thing moved


## July 13: Roadblock number 4 - wiring
I hate wiring. we were up at 4am redoing the entire wiring because their was issues with the gpio stuff.
Here is a picture of the wiring. 

 ![WhatsApp Image 2025-07-13 at 15 31 15_a4ac9f2a](https://github.com/user-attachments/assets/8efb8fc6-7504-477b-8493-d271c271c3e4)

## July 13: Assembly

We assembled the entire bot! Here are some photos:

![WhatsApp Image 2025-07-13 at 15 06 22_39daa7c8](https://github.com/user-attachments/assets/0aef041b-5a82-4820-9ae1-544868b01030)
![WhatsApp Image 2025-07-13 at 15 06 22_d549f691](https://github.com/user-attachments/assets/1c1052bc-bf50-4799-90e1-0ed4d45710d2)


Just the team working
![WhatsApp Image 2025-07-13 at 15 06 22_2a913bad](https://github.com/user-attachments/assets/e314d458-8fdb-44b9-9ab8-ff2ba248cfe2)

---

## July 13: Coding!

We’re currently deep into coding! Stay tuned.
