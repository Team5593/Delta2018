#include "MoveDistance.h"
#include <GyroBase.h>
#include <Encoder.h>
#include <iostream>

MoveDistance::MoveDistance(double distance, double speed):
	pid(1.0, 1.0, 0.5, &Robot::drivetrain.GetEncoderLeft(), new MoveDriveTrain(), 0.05),
	distance(distance),
	speed(speed)
{
	Requires(&Robot::drivetrain);
	
	speed = fabs(speed);
	pid.SetOutputRange(-speed, speed);
	pid.SetSetpoint(distance);
	pid.SetAbsoluteTolerance(1);
}

void MoveDistance::Initialize() {
	Robot::drivetrain.GetEncoderLeft().Reset();
	Robot::drivetrain.ResetDistance();
	pid.Enable();
}

void MoveDistance::Execute() {
}

bool MoveDistance::IsFinished() {
	return pid.OnTarget();
}

void MoveDistance::End() {
	pid.Disable();
}

void MoveDistance::Interrupted() { End(); }

void MoveDriveTrain::PIDWrite(double output) {
	double heading = Robot::drivetrain.GetGyro().GetAngle() / 45;
	//std::cout << delta << std::endl;
	//auto rotation_correction = Robot::drivetrain.GetGyro().GetAngle() / 90;
	Robot::drivetrain.Drive(output, -heading);
}
