# Passive-Solar-Lighting-and-Fan-Control-System
A simple Arduino project that uses a solar sensor to control a fan and lighting system based on ambient light levels.
## Description

This project reads the voltage from a solar sensor (e.g., a small solar cell connected to analog pin A0) and uses it to determine whether to turn on or off a fan and a light. When it's dark (voltage drops below a threshold), the fan and light turn ON automatically. When it’s bright enough, both turn OFF.

---

## Components

- Arduino board (e.g., Uno, Nano)
- Solar sensor (or small solar panel)
- 5V fan
- LED light or small lamp
- 2 x NPN transistors (optional for higher current)
- Resistors (optional, e.g., 220Ω)
- Jumper wires
- Breadboard

---

## How It Works

- The solar sensor outputs a voltage depending on light intensity.
- The Arduino reads this voltage from analog pin A0.
- If the voltage is **greater than 1.7V**, it means it's bright → fan and light are turned OFF.
- If the voltage is **less than or equal to 1.7V**, it’s dark → fan and light are turned ON.
