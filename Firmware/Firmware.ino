#include <ESP32Servo.h>
#include <Bluepad32.h>

// Servo objects
Servo Xleg1;  // D13 - X BACK LEFT
Servo Xleg2;  // D27 - X FRONT RIGHT
Servo Xleg3;  // D12 - X BACK RIGHT
Servo Xleg4;  // D14 - X FRONT LEFT

Servo Yleg1;  // D26 - Y BACK LEFT
Servo Yleg2;  // D32 - Y FRONT RIGHT
Servo Yleg3;  // D25 - Y BACK RIGHT
Servo Yleg4;  // D33 - Y FRONT LEFT

// Constants
const int neutral = 90;       // reset position
const int stepAngle = 60;     // how far forward to move
const int moveDelay = 500;    // wait time between movements

bool isWalking;

constexpr uint8_t STATUS_LED = 2;
ControllerPtr myControllers[BP32_MAX_GAMEPADS];

void onConnectedController(ControllerPtr ctl) {
  Serial.println("Controller connected");
  myControllers[0] = ctl;
  digitalWrite(STATUS_LED, HIGH);
  ctl->playDualRumble(0, 500, 255, 128);
}

void onDisconnectedController(ControllerPtr)   {
  Serial.println("Controller disconnected");
  myControllers[0] = nullptr;
  digitalWrite(STATUS_LED, LOW);
}

void processGamepad(ControllerPtr ctl) {
  if (ctl->a()) {
    Serial.println("Rick Ross Mongolian Throat Singing");
    Serial.println(isWalking)
    if (!isWalking) {
      isWalking = true;
      walk();
    }
  }
}

void setup() {
  digitalWrite(STATUS_LED, LOW);

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
  delay(500);

  isWalking = false;

  BP32.setup(&onConnectedController, &onDisconnectedController);
  //BP32.forgetBluetoothKeys(); PLEASE DO NOT UNCOMMENT THIS
  BP32.enableVirtualDevice(false);
}

void loop() {
  if (BP32.update()) {
    ControllerPtr ctl = myControllers[0];
    if (ctl && ctl->isConnected() && ctl->hasData() && ctl->isGamepad())
      processGamepad(ctl);
  }
  delay(10); 
}

void walk() {
  isWalking = true;
  for (int i = 0; i < 2; i++) {
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
  isWalking = false;
}


