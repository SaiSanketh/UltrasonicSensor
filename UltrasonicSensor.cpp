#include "UltrasonicSensor.h"
#include "Arduino.h"
UltrasonicSensor::UltrasonicSensor(int TrigPin, int EchoPin)//Constructor
{
	trigPin=TrigPin;
	pinMode(trigPin,OUTPUT);
	echoPin=EchoPin;
	pinMode(echoPin,INPUT);
}
double UltrasonicSensor::getDist() //Returns distance in centimetres
{
	double duration, distance;
	digitalWrite(trigPin, HIGH);
	delayMicroseconds(10);
	digitalWrite(trigPin, LOW);
	duration = pulseIn(echoPin, HIGH);
	distance = (duration/2) / 29.1; //Conversion assuming the speed of sound to be ~343m/s
	return distance;
}
long UltrasonicSensor::getPingDuration() //Returns the ping duration in microseconds
{
	long duration;
	digitalWrite(trigPin, HIGH);
	delayMicroseconds(10);
	digitalWrite(trigPin, LOW);
	duration = pulseIn(echoPin, HIGH);
	return duration;
}
