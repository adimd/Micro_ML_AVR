#include <Arduino.h>

#define LED_PIN LED_BUILTIN

void setup() {
    pinMode(LED_PIN, OUTPUT);
    Serial.begin(115200);

    while (!Serial) {
        ; // Needed on some boards
    }

    Serial.println("TEST: Blink bring-up firmware running");
}

void loop() {
    digitalWrite(LED_PIN, HIGH);
    Serial.println("TEST: LED ON");
    delay(500);

    digitalWrite(LED_PIN, LOW);
    Serial.println("TEST: LED OFF");
    delay(500);
}