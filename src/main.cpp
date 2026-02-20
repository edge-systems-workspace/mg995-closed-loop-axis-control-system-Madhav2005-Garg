#include <Arduino.h>
#include <Servo.h>

#define SERVO_PIN 6

Servo myServo;

void setup() {
    myServo.attach(SERVO_PIN);
    Serial.begin(9600);
}

// ... setup code same as above ...

// ... setup code same as above ...

void loop() {
    for (int i = 0; i <= 180; i++) {
        myServo.write(i);
        delay(15);
    }
    for (int i = 180; i >= 0; i--) {
        myServo.write(i);
        delay(15);
    }
}