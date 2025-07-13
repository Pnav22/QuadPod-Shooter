#include <ESP32Servo.h>

// Servo objects
Servo Xleg1;  // D13 - back left
Servo Xleg2;  // D27 - front right
Servo Xleg3;  // D12 - back right
Servo Xleg4;  // D14 - front left
Servo Yleg1;  // D26 - back left
Servo Yleg2;  // D
Servo Yleg3;
Servo Yleg4;

// Constants
const int neutral = 90;       // neutral position
const int stepAngle = 30;     // how far forward to move
const int moveDelay = 500;    // wait time between movements

void setup() {
  Xleg1.setPeriodHertz(50);
  Xleg1.attach(13);

  Xleg2.setPeriodHertz(50);
  Xleg2.attach(27);

  Xleg3.setPeriodHertz(50);
  Xleg3.attach(12);

  Xleg4.setPeriodHertz(50);
  Xleg4.attach(14);

  Yleg1.setPeriodHertz(50);
  Yleg1.attach(26);

  Yleg2.setPeriodHertz(50);
  Yleg2.attach(32);

  Yleg3.setPeriodHertz(50);
  Yleg3.attach(25);

  Yleg4.setPeriodHertz(50);
  Yleg4.attach(33);

  // All start at neutral position
  Xleg1.write(neutral);
  Xleg2.write(neutral);
  Xleg3.write(neutral);
  Xleg4.write(neutral);

  Yleg1.write(neutral);
  Yleg2.write(neutral);
  Yleg3.write(neutral);
  Yleg4.write(neutral);
  delay(1000);
}

void loop() {
  for (int i = 0; i < 2; i++) {
    Yleg1.write(neutral + stepAngle);
    delay(moveDelay);
    Yleg1.write(neutral);
    delay(moveDelay);

    Yleg2.write(neutral + stepAngle);
    delay(moveDelay);
    Yleg2.write(neutral);
    delay(moveDelay);

    Yleg3.write(neutral + stepAngle);
    delay(moveDelay);
    Yleg3.write(neutral);
    delay(moveDelay);

    Yleg4.write(neutral + stepAngle);
    delay(moveDelay);
    Yleg4.write(neutral);
    delay(moveDelay);
  }
  // Stop after 2 cycles
  while (true) {
    // Hold in place
  }
}


