#include <ESP32Servo.h>

Servo myServo;

constexpr uint8_t servoPin = 13;

void setup() {
  Serial.begin(115200);
  
  myServo.setPeriodHertz(50);         // Standard 50Hz servo PWM
  myServo.attach(servoPin);                 // Attach to GPIO13 (change if needed)

  Serial.println("Servo test starting");
}

void loop() {
  Serial.println("Moving to 30°");
  myServo.write(30);
  delay(1000);

  Serial.println("Moving to 150°");
  myServo.write(150);
  delay(1000);
}
