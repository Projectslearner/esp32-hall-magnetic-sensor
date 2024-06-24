/*
    Project name : ESP32 Hall magnetic sensor
    Modified Date: 24-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp32-hall-magnetic-sensor
*/

// Pin connected to the Hall Effect sensor output
const int hallSensorPin = 4; // GPIO pin 4 on ESP32

void setup() {
  Serial.begin(9600); // Initialize serial communication
  
  pinMode(hallSensorPin, INPUT_PULLUP); // Configure pin as input with internal pull-up resistor
}

void loop() {
  int sensorValue = digitalRead(hallSensorPin); // Read the state of the Hall sensor
  
  if (sensorValue == HIGH) {
    Serial.println("Magnetic field detected");
  } else {
    Serial.println("No magnetic field");
  }
  
  delay(500); // Delay before next reading
}
