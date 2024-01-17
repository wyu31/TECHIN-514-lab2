// This is the code for ESP32
#define ANALOG_PIN 1
#include <Arduino.h>


void setup() {
  Serial.begin(115200); // Start the serial communication
}

void loop() {
  int adcValue = analogRead(ANALOG_PIN); // Read the analog value
  float voltage = (adcValue / 4095.0) * 3.3; // Convert ADC value to voltage

  Serial.print("Voltage: ");
  Serial.print(voltage);
  Serial.println(" V");

  delay(1000); // Wait for 1 second before reading again
}
