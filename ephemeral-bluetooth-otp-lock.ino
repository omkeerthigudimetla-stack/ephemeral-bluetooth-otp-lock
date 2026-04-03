#include <Servo.h>

Servo lockServo;

char data;

void setup() {
  Serial.begin(9600);   // Bluetooth communication
  lockServo.attach(9);  // Servo signal pin
  lockServo.write(0);   // Locked position
}

void loop() {

  if (Serial.available() > 0) {
    data = Serial.read();

    if (data == '1') {        // Correct OTP
      lockServo.write(90);    // Unlock
      delay(5000);            // Stay open 5 sec
      lockServo.write(0);     // Lock again
    }

    if (data == '0') {        // Wrong OTP
      // Do nothing (remain locked)
    }
  }
}