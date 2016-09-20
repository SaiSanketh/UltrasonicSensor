#include <UltrasonicSensor.h>
UltrasonicSensor US(12,13);//US(trigPin,echoPin);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
long duration=US.getPingDuration();
Serial.println(duration);
delay(500);
}
