// Mercy Cube v3 — HRV Coherence Example (ESP32 Arduino)
// Requires PulseSensorPlayground library

#include <PulseSensorPlayground.h>
#include <Adafruit_NeoPixel.h>

#define LED_PIN    48
#define NUM_LEDS   60
#define VIB_PIN    47

Adafruit_NeoPixel pixels(NUM_LEDS, LED_PIN, NEO_GRB + NEO_KHZ800);
PulseSensorPlayground pulseSensor;

void setup() {
  Serial.begin(115200);
  pixels.begin();
  pulseSensor.analogInput(A0);  // Pulse sensor on analog pin
  pulseSensor.begin();
  pixels.clear();
  pixels.show();
}

void loop() {
  int bpm = pulseSensor.getBeatsPerMinute();
  int ibi = pulseSensor.getInterBeatInterval();  // R-R interval in ms

  if (pulseSensor.sawStartOfBeat()) {
    Serial.print("BPM: "); Serial.print(bpm);
    Serial.print(" | IBI: "); Serial.println(ibi);

    // Basic coherence: smooth IBI variation ~6 breaths/min
    if (ibi > 900 && ibi < 1100) {
      // Coherent — mercy blue glow + soft vibe
      pixels.fill(pixels.Color(0, 60, 120));
      pixels.show();
      analogWrite(VIB_PIN, 80);
    } else {
      // Chaotic — gentle guide to slow breath
      pixels.fill(pixels.Color(120, 0, 60));  // soft magenta reminder
      pixels.show();
      analogWrite(VIB_PIN, 120);
      delay(200);
      analogWrite(VIB_PIN, 0);
    }
  }

  delay(20);
}
