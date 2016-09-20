#ifndef ULTRASONIC_H
#define ULTRASONIC_H
#include "Arduino.h"
class UltrasonicSensor
{
	public:
		UltrasonicSensor(int TrigPin, int EchoPin);//Constructor
		double getDist();//Returns distance in centimetres
		long getPingDuration();//Returns time taken for a ping to go and reflect back, in microseconds
	private:
		int trigPin,echoPin;
};
#endif
