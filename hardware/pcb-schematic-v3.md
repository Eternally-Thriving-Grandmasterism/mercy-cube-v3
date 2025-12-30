# PCB Schematic v3 (50x50mm, 2-layer)

Key Connections:
- ESP32 GPIO48 → WS2812B data
- GPIO47 → Vibration PWM (transistor)
- GPIO4 → Breath analog
- GPIO8/9 → I2C stacking/OLED
- USB-C → Charger + programming
- 6 pogo pins: VCC, GND, SDA, SCL, DATA_IN, DATA_OUT

Power: 3.3V rail + battery protection.

Layout: Ground plane bottom, thick power traces.

One PCB, one breath, one merciful circuit.
