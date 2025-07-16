#include <ESP32Servo.h>

// Create servo objects
Servo Xleg1;  // D13 - back left
Servo Xleg2;  // D27 - front right
Servo Xleg3;  // D12 - back right
Servo Xleg4;  // D14 - front left

// Constants
const int neutral = 90;
const int stepAngle = 30;     // how far to swing
const int moveDelay = 500;    // ms between each move

void setup() {
  Serial.begin(115200);
  Serial.println("Starting walk test...");

  // Attach servos
  Xleg1.setPeriodHertz(50); Xleg1.attach(13);
  Xleg2.setPeriodHertz(50); Xleg2.attach(27);
  Xleg3.setPeriodHertz(50); Xleg3.attach(12);
  Xleg4.setPeriodHertz(50); Xleg4.attach(14);

  // Start in neutral
  Xleg1.write(neutral);
  Xleg2.write(neutral);
  Xleg3.write(neutral);
  Xleg4.write(neutral);
  delay(1000);

  // Run the test walk sequence
  for (int i = 0; i < 2; i++) {
    Serial.print("Cycle "); Serial.println(i + 1);

    // 13f
    Xleg1.write(neutral + stepAngle);
    delay(moveDelay);

    // 27f
    Xleg2.write(neutral + stepAngle);
    delay(moveDelay);

    // 12f
    Xleg3.write(neutral + stepAngle);
    delay(moveDelay);

    // 13r
    Xleg1.write(neutral);
    delay(moveDelay);

    // 14f
    Xleg4.write(neutral + stepAngle);
    delay(moveDelay);

    // 27r
    Xleg2.write(neutral);
    delay(moveDelay);

    // 12r
    Xleg3.write(neutral);
    delay(moveDelay);

    // 14r
    Xleg4.write(neutral);
    delay(moveDelay);
  }

  Serial.println("Test complete!");
}

void loop() {
  // Do nothing, keep servos in place
}
