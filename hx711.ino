#include "HX711.h"

const int DT_PIN = 2;
const int SCK_PIN = 3;

HX711 scale(DT_PIN, SCK_PIN);

void setup() {
  Serial.begin(9600);
  scale.set_scale();
  scale.tare();
}

void loop() {
  float weight = scale.get_units();
  Serial.print("Ağırlık: ");
  Serial.print(weight);
  Serial.println(" kg");
  delay(1000);
}
