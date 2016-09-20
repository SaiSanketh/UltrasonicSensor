#include <UltrasonicSensor.h>
UltrasonicSensor US(12,13);
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(US.getSpeed());
  delay(200);
}
