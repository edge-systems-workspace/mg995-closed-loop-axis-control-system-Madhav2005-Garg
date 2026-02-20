#include <Arduino.h>
#include <Servo.h>

// Constants for hardware configuration
#define SERVO_PIN 6
#define STEP_DELAY 15 // Delay in ms for smooth movement

Servo myServo;

void setup() {
    // Initialize the servo on the specified PWM pin
    myServo.attach(SERVO_PIN);
    // Start serial communication for debugging
    Serial.begin(9600);
}

void loop() {
    // Move from 0 to 180 degrees
    for (int i = 0; i <= 180; i++) {
        myServo.write(i);
        delay(STEP_DELAY);
    }

    // Move from 180 to 0 degrees
    for (int i = 180; i >= 0; i--) {
        myServo.write(i);
        delay(STEP_DELAY);
    }
}