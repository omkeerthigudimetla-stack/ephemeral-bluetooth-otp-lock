# ephemeral-bluetooth-otp-lock
Arduino-based smart lock using Bluetooth (HC-05), servo motor, and OTP authentication via MIT App Inventor mobile app
# Ephemeral Bluetooth OTP Lock

This project implements a **Bluetooth-controlled lock** using **Arduino** and **MIT App Inventor**. It allows unlocking via a **one-time password (OTP)** sent through a mobile app.

---

## Circuit Diagram
The hardware setup connects a **servo motor** to Arduino, which controls the lock mechanism. Bluetooth module receives OTP signals from the app.

![Circuit Diagram](circuit-diagram.jpeg)

---

## App Design (MIT App Inventor)
The mobile application interface allows the user to enter and send the OTP to the Arduino via Bluetooth.

![App Design](design.jpeg)

---

## App Blocks (Logic)
This section shows the logic blocks in MIT App Inventor. The blocks handle OTP validation and sending the command to the lock.

![App Logic Blocks](blocks.jpeg)

---

## Working Demo
The final working setup of the lock mechanism. When the correct OTP is sent via the app, the servo rotates to unlock and then locks again automatically.

![Working Demo](working.jpeg)

---

## Files in the Repository

| File | Description |
|------|-------------|
| `ephemeral-bluetooth-otp-lock.ino` | Arduino code controlling the lock. |
| `circuit-diagram.jpeg` | Hardware connection diagram. |
| `design.jpeg` | Mobile app design screenshot. |
| `blocks.jpeg` | Logic blocks of the app. |
| `working.jpeg` | Demonstration of the lock working. |
