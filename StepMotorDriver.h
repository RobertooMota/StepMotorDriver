#ifndef STEPMOTORDRIVER_H
#define STEPMOTORDRIVER_H
#include <Arduino.h>

class StepMotorDriver
{
	public:
	StepMotorDriver(byte pinStep, byte pinDir, byte pinEnb);
	void setStep_mm (float step_mm);
	
	
	private:
	byte _pinStep, _pinDir, _pinEnb;
	
	
};
#endif