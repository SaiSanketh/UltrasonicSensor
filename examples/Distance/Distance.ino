#include<UltrasonicSensor.h>
UltrasonicSensor US(12,13);//US(trigPin,echoPin)
void setup() {
  Serial.begin(9600);

}

void loop() {
  Serial.println(US.getDist());
  delay(500);
}
