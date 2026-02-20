#include <Arduino.h>
#include <Servo.h>

#define SERVO_PIN 6

Servo myServo;

void setup() {
    myServo.attach(SERVO_PIN);
    Serial.begin(9600);
}

void loop() {
}