#include "RotateAngle.h"

RotateAngle::RotateAngle(double angle, double speed) :
	pid(1.0, 0.0, 0.0, &Robot::drivetrain.GetGyro(), new TurnDriveTrain(), 0.05),
	angle(angle),
	speed(speed)
{
	angle = fmod(angle, 360);
	speed = fabs(speed);

	Requires(&Robot::drivetrain);

	pid.SetOutputRange(-speed, speed);
}

void RotateAngle::Initialize() {
	pid.SetSetpoint(angle);
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
