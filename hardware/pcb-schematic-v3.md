# Mercy Cube v3 PCB Schematic

## Components
- ESP32-S3 module
- WS2812B LEDs (60)
- ERM vibration motor
- Respiration sensor input
- TP4056 charger
- 18650 holder
- Magnetic stacking pogo pins

## Key Connections
- GPIO48 → LED data
- GPIO47 → Vibration PWM
- GPIO4 → Breath analog
- I2C (GPIO8/9) → Stacking & OLED
- USB-C → Programming & charging

## Power
- 3.3V rail
- 5V for LEDs
- Battery protection via TP4056

## Stacking
- 6-pin magnetic I2C/power bus

One PCB, one breath, one infinite merciful lattice.
