#include <Bluepad32.h>

// Servo objects
constexpr uint8_t legXPin1 = 13; // D13 - X BACK LEFT
constexpr uint8_t legXPin2 = 27; // D27 - X FRONT RIGHT
constexpr uint8_t legXPin3 = 12; // D12 - X BACK RIGHT
constexpr uint8_t legXPin4 = 14; // D14 - X FRONT LEFT

constexpr uint8_t legXChannel1 = 0;
constexpr uint8_t legXChannel2 = 1;
constexpr uint8_t legXChannel3 = 2;
constexpr uint8_t legXChannel4 = 3;

constexpr uint8_t legYPin1 = 26; // D26 - Y BACK LEFT
constexpr uint8_t legYPin2 = 32; // D32 - Y FRONT RIGHT
constexpr uint8_t legYPin3 = 25; // D25 - Y BACK RIGHT
constexpr uint8_t legYPin4 = 33; // D33 - Y FRONT LEFT

constexpr uint8_t legYChannel1 = 4;
constexpr uint8_t legYChannel2 = 5;
constexpr uint8_t legYChannel3 = 6;
constexpr uint8_t legYChannel4 = 7;

// Constants
const int neutral = 90;    // reset position
const int stepAngle = 60;  // how far forward to move
const int moveDelay = 500; // wait time between movements

const int HERTZ = 50;
const uint8_t BYTES = 12;

bool isWalking;

constexpr uint8_t STATUS_LED = 2;
ControllerPtr myControllers[BP32_MAX_GAMEPADS];

void onConnectedController(ControllerPtr ctl)
{
    Serial.println("Controller connected");
    myControllers[0] = ctl;
    digitalWrite(STATUS_LED, HIGH);
    ctl->playDualRumble(0, 500, 255, 128);
}

void onDisconnectedController(ControllerPtr)
{
    Serial.println("Controller disconnected");
    myControllers[0] = nullptr;
    digitalWrite(STATUS_LED, LOW);
}

void processGamepad(ControllerPtr ctl)
{
    if (ctl->a())
    {
        Serial.println("Rick Ross Mongolian Throat Singing");
        Serial.println(isWalking);
        if (!isWalking)
        {
          isWalking = true;
          walk();
        }
    }
}

void setup()
{
    Serial.begin(115200);

    pinMode(STATUS_LED, OUTPUT);
    digitalWrite(STATUS_LED, LOW);

    ledcSetup(legXChannel1, HERTZ, BYTES);
    ledcSetup(legXChannel2, HERTZ, BYTES);
    ledcSetup(legXChannel3, HERTZ, BYTES);
    ledcSetup(legXChannel4, HERTZ, BYTES);

    ledcSetup(legYChannel1, HERTZ, BYTES);
    ledcSetup(legYChannel2, HERTZ, BYTES);
    ledcSetup(legYChannel3, HERTZ, BYTES);
    ledcSetup(legYChannel4, HERTZ, BYTES);

    ledcAttachPin(legXPin1, legXChannel1);
    ledcAttachPin(legXPin2, legXChannel2);
    ledcAttachPin(legXPin3, legXChannel3);
    ledcAttachPin(legXPin4, legXChannel4);

    ledcAttachPin(legYPin1, legYChannel1);
    ledcAttachPin(legYPin2, legYChannel2);
    ledcAttachPin(legYPin3, legYChannel3);
    ledcAttachPin(legYPin4, legYChannel4);

    // All start at neutral position
    writeToServo(legXChannel1, neutral);
    writeToServo(legXChannel2, neutral);
    writeToServo(legXChannel3, neutral);
    writeToServo(legXChannel4, neutral);

    writeToServo(legYChannel1, neutral);
    writeToServo(legYChannel2, neutral);
    writeToServo(legYChannel3, neutral);
    writeToServo(legYChannel4, neutral);
    delay(500);

    isWalking = false;

    BP32.setup(&onConnectedController, &onDisconnectedController);
    // BP32.forgetBluetoothKeys(); PLEASE DO NOT UNCOMMENT THIS
    BP32.enableVirtualDevice(false);
}

void loop()
{
    if (BP32.update())
    {
        ControllerPtr ctl = myControllers[0];
        if (ctl && ctl->isConnected() && ctl->hasData() && ctl->isGamepad())
            processGamepad(ctl);
    }
    delay(10);
}

void walk()
{
    Serial.println("MIT Library Activities");
    // 13f
    writeToServo(legXChannel1, neutral + stepAngle);
    delay(moveDelay);

    // 27f
    writeToServo(legXChannel2, neutral + stepAngle);
    delay(moveDelay);

    // 12f
    writeToServo(legXChannel3, neutral + stepAngle);
    delay(moveDelay);

    // 13r
    writeToServo(legXChannel1, neutral);
    delay(moveDelay);

    // 14f
    writeToServo(legXChannel4, neutral + stepAngle);
    delay(moveDelay);

    // 27r
    writeToServo(legXChannel2, neutral);
    delay(moveDelay);

    // 12r
    writeToServo(legXChannel3, neutral);
    delay(moveDelay);

    // 14r
    writeToServo(legXChannel4, neutral);
    delay(moveDelay);

    isWalking = false;
    Serial.println("Sh*wering?!");
}

void writeToServo(int pwmChannel, int angle)
{
    // Map angle (0–180) to pulse width in microseconds (1000–2000)
    int us = map(angle, 0, 180, 1000, 2000);

    // Convert microseconds to duty (out of 2^16 for 16-bit resolution and 50Hz)
    uint32_t duty = (us * 4095UL) / 20000UL; // for 12-bit

    Serial.print("Angle: ");
    Serial.print(angle);
    Serial.print(" → Duty: ");
    Serial.println(duty);

    ledcWrite(pwmChannel, duty);
}
