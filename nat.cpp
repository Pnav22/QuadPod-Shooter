#include <ESP32Servo.h>

// Servo objects
Servo Xleg1;  // D13 - back left
Servo Xleg2;  // D27 - front right
Servo Xleg3;  // D12 - back right
Servo Xleg4;  // D14 - front left
Servo Yleg1;  
Servo Yleg2;
Servo Yleg3;
Servo Yleg4;

// Constants
const int neutral = 90;       // neutral position
const int stepAngle = 15;     // how far forward to move
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
  Yleg4.attach(35);

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
    // Move leg1 (D13) forward
    Xleg1.write(neutral + stepAngle);
    delay(moveDelay);
    Xleg1.write(neutral);
    delay(moveDelay);

    // Move leg2 (D27) forward
    Xleg2.write(neutral + stepAngle);
    delay(moveDelay);
    Xleg2.write(neutral);
    delay(moveDelay);

    // Move leg3 (D12) forward
    Xleg3.write(neutral + stepAngle);
    delay(moveDelay);
    Xleg3.write(neutral);
    delay(moveDelay);

    // Move leg4 (D14) forward
    Xleg4.write(neutral + stepAngle);
    delay(moveDelay);
    Xleg4.write(neutral);
    delay(moveDelay);
  }

  // Stop after 2 cycles
  while (true) {
    // Hold in place
  }
}
