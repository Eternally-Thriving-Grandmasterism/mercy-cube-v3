# Basic Schematic (Text Diagram)

ESP32-S3
├── GPIO48 → WS2812B data
├── GPIO47 → Vibration motor (PWM)
├── ADC1 (GPIO4) → Respiration sensor
├── 3.3V → OLED (optional)
├── Battery → 3.3V regulator
└── I2C pins → Stacking bus

Stacking: Magnetic contacts + I2C + power share
