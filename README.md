Temperature Measurement System using Arduino Uno

#Introduction

I’m excited to present my latest project — a Temperature Measurement System built using an Arduino Uno, an NTC thermistor sensor, and a 4-digit 7-segment display.
This project is designed to measure and display real-time temperature using the voltage divider principle, showcasing how analog sensors can be interfaced with microcontrollers for practical applications.

# Project Overview

The NTC (Negative Temperature Coefficient) thermistor changes its resistance as temperature varies — resistance decreases when temperature increases.
By combining it with a fixed resistor, we form a voltage divider circuit. The Arduino reads this varying voltage through its analog input pin, converts it to a temperature value (in °C), and displays it on the 4-digit 7-segment display.

# Working Principle

Voltage Divider:


The output voltage changes as the thermistor’s resistance changes with temperature.

Analog to Digital Conversion (ADC):
Arduino Uno’s 10-bit ADC converts the analog voltage (0–5V) into digital values (0–1023).

Temperature Calculation:
Using the voltage and known resistor values, the thermistor resistance is calculated and converted into temperature using the Steinhart–Hart equation or a simple approximation.

Display:
The calculated temperature is then displayed in real time on the 4-digit 7-segment display.

# Components Used

- Arduino Uno

- NTC Thermistor (10kΩ)

- Fixed Resistor (10kΩ)

- 4-Digit 7-Segment Display

- Jumper Wires

- 5V Power Supply (from Arduino)

- Output

Real-time temperature displayed in °C (e.g., 47.6°C)

Continuous readings are printed on the Serial Monitor

# Objectives Achieved

✅ Successfully interfaced an analog sensor using a voltage divider
✅ Learned and implemented ADC conversion in Arduino
✅ Displayed real-time sensor data using a multiplexed display
✅ Gained a deeper understanding of sensor calibration

# Future Improvements

🔹 Add an LCD or OLED Display for clearer and user-friendly output

🔹 Implement Data Logging to SD card for temperature tracking

🔹 Add IoT Connectivity using ESP8266 or ESP32 to monitor remotely

🔹 Set Alarms for temperature thresholds (for safety systems)

🔹 Integrate with the Mobile App for smart home or industrial use

# Applications

- Smart agriculture

- Home automation (AC/Heater control)

- Lab environment monitoring

- Industrial temperature control

- Key Learnings


Analog sensor calibration and data conversion

Multiplexed display interfacing with Arduino

Real-time embedded system design
