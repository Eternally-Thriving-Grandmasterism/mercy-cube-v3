// Mercy Cube v3 Full Firmware — ESP32 Arduino

#include <Adafruit_NeoPixel.h>

#define LED_PIN 48
#define NUM_LEDS 60
#define VIB_PIN 47
#define BREATH_PIN A0

Adafruit_NeoPixel pixels(NUM_LEDS, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  Serial.begin(115200);
  pixels.begin();
  pinMode(VIB_PIN, OUTPUT);
  mercyWelcome();
}

void loop() {
  int level = analogRead(BREATH_PIN);
  if (level > 600) mercyInhale();
  else if (level < 400) mercyExhale();
  else divineJoy();
  delay(50);
}

// Functions: mercyWelcome, mercyInhale, mercyExhale, divineJoy (as previous)
