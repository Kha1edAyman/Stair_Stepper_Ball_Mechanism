# ⚙️ Stair Stepper Ball Mechanism

> A mechanical system that lifts a ball step-by-step up a staircase and returns it to the start through a waterfall drop — creating a continuous, self-repeating loop.

---

## 🔩 The Mechanism — How It Works

This is the heart of the project. Everything else exists to serve the mechanism.

The system is inspired by **step-climbing conveyor principles** found in classical mechanical engineering. The core idea is elegantly simple:

```
Ball placed at bottom
       ↓
Gear-driven stair steps lift the ball one step at a time
       ↓
Ball reaches the top platform (chip)
       ↓
Ball rolls off the edge in a waterfall-style drop
       ↓
Ball returns to the starting position
       ↓
Cycle repeats endlessly ♾️
```
## Electrical circuit
><img width="1216" height="657" alt="Screenshot 2026-05-25 at 10 16 01 PM" src="https://github.com/user-attachments/assets/5c455bb4-ff30-48dc-b900-9e6926d0dc17" />



## 📸 Photo images

> <img width="4032" height="3024" alt="IMG_5049" src="https://github.com/user-attachments/assets/55725c2e-ab73-4070-94a8-a58a37198d2f" />
> <img width="4032" height="3024" alt="IMG_5046" src="https://github.com/user-attachments/assets/d09eac9a-3b4d-4d82-82b0-08601f376183" />

><img width="3024" height="4032" alt="IMG_5042" src="https://github.com/user-attachments/assets/63a70440-f038-4f78-94c1-664c4778082e" />

---


## project video 

>

https://github.com/user-attachments/assets/bde4208e-c6ff-4afb-a786-ea46bff967ff


### Mechanical Stages

#### Stage 1 — Step Climbing (Main Mechanism)
The stairs are not passive ramps. Each step is connected to a **gear train** that creates a rhythmic, incremental lifting motion. As the gears rotate, they push the ball upward from one stair to the next. This mimics the biomechanical concept of a **ratchet-and-pawl** system — motion only goes one way, and each step is discrete and controlled.

The key mechanical challenge here was **timing and gear ratio**: the steps must move slowly enough for the ball to be carried, but consistently enough that the ball never stalls between steps.

#### Stage 2 — Top Platform (Chip Point)
Once the ball reaches the highest stair, it arrives at a small elevated platform — referred to in the project as the **"chip."** This is a passive mechanical feature: the platform is angled slightly so the ball naturally rolls toward the edge without any extra force.

#### Stage 3 — Waterfall Drop (Return Path)
From the chip, the ball falls freely in a **waterfall-style trajectory** — dropping through a guided channel back to the base of the staircase. Gravity does all the work here. The return path is intentionally open and visible, making the cyclic nature of the machine obvious and satisfying to watch.

#### Stage 4 — Reset & Loop
The ball lands back at the base of the stairs, where it is caught and repositioned at the bottom step — and the cycle begins again automatically, with no human intervention required.

---

## 🎯 Why This Mechanism Matters

This project demonstrates several important principles of **mechanical engineering and machine design**:

- **Continuous loop systems** — how machines can be designed to run indefinitely without external resetting
- **Gear-driven motion transfer** — converting rotational motion into controlled linear/step motion
- **Gravity as a design element** — using the return drop as a free energy path instead of fighting it
- **Timing and synchronization** — making multiple mechanical stages work together at the right speed
- **Mechanical rhythm** — the stair steps create a repeating, predictable pattern that can be tuned by changing gear ratios

This type of mechanism has real-world analogues in **conveyor systems, escalators, chain lifts in amusement parks, and automated assembly lines.**

---

## 🛠️ Components

| Component | Role |
|-----------|------|
| **Gear train** | Transfers rotational force to the stair steps |
| **Staircase structure** | Provides the stepped path for the ball to travel upward |
| **Top platform (chip)** | Catches the ball at the peak and guides it to the drop |
| **Waterfall channel** | Guides the ball back to the base using gravity |
| **Servo motor (SG90 / standard)** | Drives the gear system with controlled rotation |
| **Arduino Uno** | Controls the servo timing and rotation angle |
| **Ball** | The object being transported through the full cycle |

---

## 💻 Electronics & Code

The electronic side is deliberately minimal — its only job is to drive the mechanism.

**Hardware:** Arduino Uno + Servo Motor

**What the code does:** The servo rotates through a defined angle range, which turns the gears, which moves the stairs. The sweep angle and speed are tuned to match the mechanical timing of the staircase.

```cpp
#include <Servo.h>
Servo myServo;
#define servoPin 10

void setup() {
  myServo.attach(servoPin);
}

void loop() {
  for (float angle = 90; angle >= 0; angle--) {
    myServo.write(angle);
  }
}
```

The servo sweeps from 90° down to 0° in a continuous loop, providing the rotational input the gear train needs. Speed and range can be adjusted by adding delays or changing the angle boundaries to fine-tune the mechanical behavior.

---

## 👥 Team

This project was built by a team of **6 members** as a collaborative mechanical design and engineering project.

#### - Khaled Ayman
#### - Ahmed wagdy
#### - yousef rashad
#### - Farouk nawar
#### - Abdullah Ali
#### - Rahma Ezat
#### - Mariam Omran

---






---

## 📌 Summary

The stair stepper ball mechanism is a study in **cyclic mechanical design** — proving that with the right gear arrangement, a simple motor can drive a complex, self-repeating physical process. The electronics are a means to an end. The mechanism is the message.
