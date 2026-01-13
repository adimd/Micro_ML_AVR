#include <Arduino.h>

#define LED_PIN LED_BUILTIN

void setup() {
    pinMode(LED_PIN, OUTPUT);
    Serial.begin(115200);

    while (!Serial) {
        ; // wait for serial (important for some boards)
    }

    Serial.println("Board init successful");
}

void loop() {
    digitalWrite(LED_PIN, HIGH);
    Serial.println("LED ON");
    delay(500);

    digitalWrite(LED_PIN, LOW);
    Serial.println("LED OFF");
    delay(500);
}