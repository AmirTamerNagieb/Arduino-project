# Ultrasonic Distance Measurement

## Project Overview
This project uses an **Arduino Uno** and an **HC-SR04 ultrasonic sensor** to measure the distance between the sensor and an object. The measured distance is printed to the Serial Monitor in centimeters.

The project is configured for simulation in **Wokwi**.

## Components
- Arduino Uno
- HC-SR04 ultrasonic distance sensor

## Pin Configuration
The Arduino sketch defines these pins:

| HC-SR04 pin | Arduino Uno pin |
|---|---|
| TRIG | Digital pin 3 |
| ECHO | Digital pin 4 |
| GND | GND |
| VCC | As configured in `diagram.json` (3.3V) |

**Wiring note:** The diagram also contains an additional connection from Arduino pin 3 to pin 5. Check the Wokwi diagram before running the simulation. The HC-SR04 is commonly powered from 5V; verify the sensor and board requirements before using physical hardware.

## How It Works
1. The Arduino sends a short trigger pulse from pin 3.
2. The sensor sends an ultrasonic signal and receives its echo.
3. The `pulseIn()` function measures how long the echo signal stays HIGH, with a timeout of 30,000 microseconds.
4. The sketch calculates the distance using:

   `distance = duration * 0.0343 / 2`

5. The result is printed in centimeters. If no echo is received before the timeout, the Serial Monitor displays `No object detected`.
6. The loop repeats every 200 milliseconds.

## How to Run
1. Open the project in [Wokwi](https://wokwi.com/).
2. Load the project files: `diagram.json` and `sketch.ino`.
3. Start the simulation.
4. Open the Serial Monitor and set the baud rate to **9600**.
5. Move an object in front of the ultrasonic sensor to see the distance readings.

## Files
- `sketch.ino` — Arduino program.
- `diagram.json` — Wokwi circuit layout and connections.
- `wokwi-project.txt` — Original Wokwi project reference.

## Serial Monitor Output
Example output:

```text
Distance: 25.40 cm
Distance: 24.85 cm
No object detected
```

*The values above are examples; actual readings depend on the object and its distance from the sensor.*

## Online Project
Open and run the project directly in Wokwi:

https://wokwi.com/projects/481419044807394305
