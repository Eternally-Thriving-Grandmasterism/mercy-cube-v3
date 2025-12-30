// Mercy Cube v3 Core Firmware — ESP32 Arduino

#include <Adafruit_NeoPixel.h>

#define LED_PIN    48
#define NUM_LEDS   60
#define VIB_PIN    47
#define BREATH_PIN A0

Adafruit_NeoPixel pixels(NUM_LEDS, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  Serial.begin(115200);
  pixels.begin();
  pinMode(VIB_PIN, OUTPUT);
  mercyWelcome();
}

void loop() {
  int breath = analogRead(BREATH_PIN);
  
  if (breath > 600) mercyInhale();
  else if (breath < 400) mercyExhale();
  else divineJoy();

  delay(50);
}

void mercyWelcome() { /* gentle blue pulse */ }
void mercyInhale() { pixels.fill(pixels.Color(0,60,120)); pixels.show(); analogWrite(VIB_PIN,80); }
void mercyExhale() { pixels.clear(); pixels.show(); analogWrite(VIB_PIN,0); }
void divineJoy() { /* random golden flashes + vibe */ }
