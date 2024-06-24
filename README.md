# ESP32 Hall Magnetic Sensor Project

## Project Overview
This project demonstrates how to utilize a Hall Effect sensor with an ESP32 microcontroller to detect the presence of a magnetic field. Hall Effect sensors are valuable for applications requiring contactless detection of magnets or magnetic fields.

## Components Needed
- ESP32 Microcontroller
- Hall Effect Sensor Module
- Jumper Wires
- Breadboard

## Block Diagram
*(Insert your block diagram image here)*

## Circuit Setup
1. **Connecting the Hall Effect Sensor to ESP32:**
   - Connect the signal output pin of the Hall Effect sensor module to GPIO pin 4 on the ESP32.
   - Ensure the sensor module's power and ground connections are correctly established.

## Instructions
1. **Setup:**
   - Initialize GPIO pin 4 on the ESP32 as an input with an internal pull-up resistor using `pinMode()` in the `setup()` function.

2. **Operation:**
   - In the `loop()` function:
     - Read the digital state of the Hall Effect sensor using `digitalRead(hallSensorPin)`.
     - If a magnetic field is detected (HIGH state), print "Magnetic field detected" to the Serial Monitor.
     - If no magnetic field is detected (LOW state), print "No magnetic field" to the Serial Monitor.

3. **Considerations:**
   - **Sensor Orientation:** Position the Hall Effect sensor appropriately relative to the magnetic field being detected.
   - **Environmental Interference:** Minimize interference from nearby magnetic sources for accurate readings.

## Applications
- **Proximity Detection:** Detect the presence of magnets or magnetic materials without physical contact.
- **Position Sensing:** Determine the position of objects with embedded magnets.
- **Security Systems:** Use in magnetic door sensors for security applications.

## Notes
- **Sensor Output:** Hall Effect sensors provide a digital output based on the presence or absence of a magnetic field.
- **Serial Output:** Monitor sensor readings and adjust placement or sensitivity as needed for optimal performance.

---

## Useful Links
🌐 [ProjectsLearner - ESP32 Hall Magnetic Sensor](https://projectslearner.com/learn/esp32-hall-magnetic-sensor)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner