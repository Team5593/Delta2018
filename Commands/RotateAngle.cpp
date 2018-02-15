#include "RotateAngle.h"

RotateAngle::RotateAngle(double angle, double speed) :
	pid(1.0, 4.0, 0.9, &Robot::drivetrain.GetGyro(), new TurnDriveTrain(), 0.05),
	angle(angle),
	speed(speed)
{
	Requires(&Robot::drivetrain);
	
	angle = fmod(angle, 360);
	speed = fabs(speed);
	pid.SetOutputRange(-speed, speed);
	pid.SetSetpoint(angle);
	pid.SetAbsoluteTolerance(3);
}

void RotateAngle::Initialize() {
	Robot::drivetrain.GetGyro().Reset();
	pid.Enable();
}

void RotateAngle::Execute() {
}

void RotateAngle::End() {
	pid.Disable();
}

bool RotateAngle::IsFinished() {
	return pid.OnTarget();
}

void RotateAngle::Interrupted() {
	End();
}

void TurnDriveTrain::PIDWrite(double output) {
	Robot::drivetrain.Drive(0.0, output);
}
