#include "StepMotorDriver.h"

StepMotorDriver::StepMotorDriver(byte pinStep, byte pinDir, byte pinEnb)
{
	pinMode(pinStep, OUTPUT);
	pinMode(pinDir, OUTPUT);
	pinMode(pinEnb, OUTPUT);
	
	_pinStep = pinStep;
	_pinDir = pinDir;
	_pinEnb = pinEnb;
}

void StepMotorDriver::setStep_mm(float step_mm)
{
		_step_mm = step_mm;	
}

void StepMotorDriver::motorEnable()
{
	digitalWrite(_pinEnb, LOW);
}

void StepMotorDriver::motorDisable()
{
	digitalWrite(_pinEnb, HIGH);
}


void StepMotorDriver::onlyMove(bool dir)
{
	if(digitalRead(_pinEnb) == true) digitalWrite(_pinEnb, LOW);
	digitalWrite(_pinDir, dir);
	digitalWrite(_pinStep, HIGH);
	//delay
	digitalWrite(_pinStep, LOW);
	//delay
}