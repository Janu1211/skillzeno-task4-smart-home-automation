# Task 4 – IoT Based Smart Home Automation

## Internship
SkillZeno – Embedded Systems & IoT Internship

## Project Overview
This project demonstrates an IoT-based Smart Home Automation
system using ESP32 and the Blynk IoT platform.

The system is designed to control home appliances such as
a room light and a fan through a mobile application.

## Objectives
- Understand ESP32 Wi-Fi connectivity
- Control appliances using a Blynk IoT application
- Interface a relay module with ESP32
- Explore IoT-based home automation

## Components Required
- ESP32 Development Board
- 2-Channel Relay Module
- LED (low-voltage demonstration load)
- DC Fan (low-voltage demonstration load)
- Jumper Wires
- Blynk IoT Mobile Application

## Pin Connections

| Component | ESP32 Pin |
|-----------|-----------|
| Relay IN1 | GPIO 25 |
| Relay IN2 | GPIO 26 |
| Relay VCC | As required by module |
| Relay GND | GND |

## Working Principle
1. ESP32 connects to Wi-Fi.
2. Blynk provides a mobile interface for control.
3. The user operates the LED and fan switches in the app.
4. ESP32 receives the commands through Blynk.
5. The relay module switches the connected low-voltage loads.

## Software Used
- Arduino IDE
- Blynk IoT Platform
- ESP32 Board Package

## Code
The Arduino source code is available in:
`task4_smart_home_automation.ino`

## Expected Outcome
The system is designed to allow remote ON/OFF control
of connected low-voltage appliances through the Blynk app.

## Learning Outcomes
- ESP32 and relay interfacing
- Wi-Fi-based IoT communication
- Blynk mobile app control
- Basic smart home automation concepts

## Safety Note
Use low-voltage demonstration loads for simulation and testing.
Do not connect household AC mains directly.
Mains-powered appliances require properly rated equipment
and qualified supervision.

## Internship
SkillZeno – Embedded Systems & IoT