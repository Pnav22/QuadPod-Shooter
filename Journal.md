---
title: "QuadPod"
author: "Joel Biswas, Ayush Jaiswal, Pranav Mukkara"
description: "4-Leg Spider Robot"
created_at: "2025-07-11"
---

# QuadPod Build Log

## July 11: Excitement and Exploration

We just arrived at GitHub HQ. The place is amazing—tons of snacks and awesome working spaces. We're super excited to spend the next few nights here for the hackathon.

## July 11: Research and Ideas

We started brainstorming project ideas. One of our first concepts was a drone that acts like a hat—something like this:

<img width="350" height="364" alt="Drone Hat Concept" src="https://github.com/user-attachments/assets/77c9b01a-8813-46fd-91eb-fe02d6ac5636" />

Except this one would actually fly.

Then we explored the idea of a Mark Rober-style hat:

<img width="587" height="428" alt="Mark Rober Hat Inspiration" src="https://github.com/user-attachments/assets/c5567b47-06f9-44fc-9a4b-90814b883e72" />

We liked this, but kept brainstorming.

Eventually, we landed on the idea of a six-legged spider robot—something that would make people say, *"That's cool as f***." We found inspiration in this:

<img width="427" height="347" alt="Spider Bot Inspiration" src="https://github.com/user-attachments/assets/cabbf95f-4195-4f61-97bf-923ad53b68c4" />

To make it even cooler, we decided to mount a Nerf gun on top.

In the end, we scaled it down to four legs to simplify the build.

## July 11 to 12: Getting Started

We began CAD work and created some basic designs:

<img width="361" height="220" alt="Initial CAD Progress" src="https://github.com/user-attachments/assets/3713b3f5-0c17-44cc-99f3-3390ca0bf257" />

We sent the parts out to get printed. One of our biggest mistakes was spending too much time on CAD before securing the parts we needed. By the time we went to grab motors, most were already gone—we were two short.

This was our first major roadblock. We didn’t check part availability before designing. Someone had taken eight of the motors we needed.

We decided to redesign the CAD to work with the motors that were still available.

Eventually, we found the original motors again and reverted to our original CAD design. Shoutout to Alex for coming in clutch with two extra motors from a workshop!

<img width="1068" height="727" alt="image" src="https://github.com/user-attachments/assets/93096382-8582-4ffc-8fd5-3784095c91f8" />

<img width="291" height="180" alt="image" src="https://github.com/user-attachments/assets/e6b8b61b-6d58-4796-8534-dc09a7b18025" />

## July 12: Setting Up the ESP32

Pranav stayed up all night trying to get the ESP32 to work. He wanted to start coding but realized the board wasn’t responding.

He tried multiple computers and ESP32s, only to discover hours later that none of the USB cables he had supported data transfer. A whole all-nighter wasted.

<img width="1728" height="983" alt="image" src="https://github.com/user-attachments/assets/ff5de96f-d122-4eae-94ad-70bd641bcb68" />

The pin guide was also a nightmare. This was our second major roadblock. One person spent the entire night trying to set up the ESP32, only to realize none of the wires available could transfer data.

## July 12: Finalizing the CAD

We finalized the CAD and started printing and assembling. We used screws from the servo motor kits for assembly. Parts were printed and things started coming together.

## July 12: Third Roadblock - Servo Mounting

We messed up the leg brackets. The rectangular mounts that hold the servos had incorrect tolerances—the screws didn’t reach far enough. The servos weren't properly meshed with the arms, so nothing moved when powered.

To fix this, we used a soldering iron to heat-set the screws into the plastic. That way, when the servo moved, the arms moved with it.

## July 13: Fourth Roadblock - Wiring

Wiring was a nightmare. We were up at 4 a.m. redoing all the connections due to GPIO issues. Here’s a photo of the chaos:

![WhatsApp Image 2025-07-13 at 15 31 15_a4ac9f2a](https://github.com/user-attachments/assets/8efb8fc6-7504-477b-8493-d271c271c3e4)

## July 13: Assembly

We assembled the entire robot! Here are some photos:

![WhatsApp Image 2025-07-13 at 15 06 22_39daa7c8](https://github.com/user-attachments/assets/0aef041b-5a82-4820-9ae1-544868b01030)  
![WhatsApp Image 2025-07-13 at 15 06 22_d549f691](https://github.com/user-attachments/assets/1c1052bc-bf50-4799-90e1-0ed4d45710d2)

The team in action:

![WhatsApp Image 2025-07-13 at 15 06 22_2a913bad](https://github.com/user-attachments/assets/e314d458-8fdb-44b9-9ab8-ff2ba248cfe2)

## July 13: Coding

We're now deep into coding. Stay tuned for updates!
