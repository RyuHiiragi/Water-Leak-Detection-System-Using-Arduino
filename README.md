# Water Leak Detection System Using Arduino

This repository contains the Arduino code, configuration, and assembly instructions for building a water leak detection system. The system uses a capacitive moisture sensor to detect leaks in critical areas (e.g., under pipes or near electronics) and triggers alerts via a buzzer and LEDs <button class="citation-flag" data-index="1">. This project is ideal for preventing water damage in homes, laboratories, or industrial settings.

---

## Table of Contents
1. [Overview](#overview)
2. [Components Used](#components-used)
3. [System Dimensions](#system-dimensions)
4. [Assembly Instructions](#assembly-instructions)
5. [Arduino Code Explanation](#arduino-code-explanation)
6. [Contributing](#contributing)
7. [License](#license)

---

## Overview
The water leak detection system uses a capacitive moisture sensor to monitor areas prone to leaks. If moisture exceeds a predefined threshold, the system activates a buzzer and red LED to alert users <button class="citation-flag" data-index="1">. A green LED indicates normal conditions. This project helps prevent water damage by providing early warnings <button class="citation-flag" data-index="4">.

---

## Components Used
To build this system, you will need:
- **Arduino Uno**
- **Capacitive Soil Moisture Sensor**
- **Active Buzzer**
- **Red LED**
- **Green LED**
- **220Ω Resistors**
- **Jumper Wires**
- **Breadboard (Optional)**

---

## System Dimensions
For an ideal leak detection system:
- **Height**: 5–10 cm
- **Width**: 10–15 cm
- **Length**: 10–15 cm

---

## Assembly Instructions
1. Connect the moisture sensor to the Arduino for leak detection <button class="citation-flag" data-index="1">.
2. Add a buzzer and LEDs for audible/visual alerts.
3. Power the system via USB or battery.
4. Secure components in a waterproof enclosure if needed.

---

## Arduino Code Explanation
The code reads moisture levels from the sensor and compares them to a threshold. If a leak is detected, the buzzer and red LED are activated. The green LED indicates normal conditions <button class="citation-flag" data-index="1">. Adjust the `leakThreshold` variable based on sensor calibration.

---

## Contributing
Feel free to fork this repository and contribute improvements or new features. If you have suggestions or find bugs, please open an issue.

---

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

---

By following this guide, you should be able to build and test your own water leak detection system using Arduino. Happy tinkering! 🚀
