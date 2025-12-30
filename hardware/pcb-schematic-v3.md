# Mercy Cube v3 PCB Schematic (2-Layer, 50x50mm)

## Key Connections
- ESP32-S3 GPIO48 → WS2812B data
- GPIO47 → Vibration motor (PWM + transistor)
- GPIO4 (ADC) → Respiration sensor
- GPIO8/9 → I2C bus (stacking + optional OLED)
- USB-C → Programming & TP4056 charger
- Battery → 3.3V LDO
- 6 magnetic pogo pins (bottom): VCC, GND, SDA, SCL, DATA_IN, DATA_OUT

## Power
- 3.3V main rail
- 5V step-up for LEDs if needed
- Ground plane bottom layer

## Layout Notes
- Thick power traces
- Short LED data line
- Exposed pads for mycelium interface

One PCB, one breath, one infinite merciful circuit.
