#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded RGB LED Control (Digital + PWM)
 * @author Harsh Chaudhary
 * @date 2026-02-19
 *
 * @details
 * Controls RGB LED using digital ON/OFF
 * and analog PWM brightness control.
 */

 const int RED_PIN = 9;

 const int GREEN_PIN = 10;

 const int BLUE_PIN = 11;

void setup() {
    Serial.begin(9600);
    pinMode(RED_PIN, OUTPUT);
    pinMode(GREEN_PIN, OUTPUT);
    pinMode(BLUE_PIN, OUTPUT);
    Serial.println("RGB System Initialized");
}

void loop() {
    // -------- DIGITAL MODE --------
    digitalWrite(RED_PIN, HIGH);
    delay(1000); // Wait to see the color

    digitalWrite(RED_PIN, LOW);
    delay(500);

    // -------- ANALOG (PWM) MODE --------
    analogWrite(RED_PIN, 128); // 50% brightness

    analogWrite(GREEN_PIN, 0); // OFF

    analogWrite(BLUE_PIN, 128); // 50% brightness (Makes Purple)

    delay(1000);
    
    // Reset for next loop
    analogWrite(RED_PIN, 0);
    analogWrite(BLUE_PIN, 0);
    delay(500);
}
