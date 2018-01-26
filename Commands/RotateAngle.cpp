#include "RotateAngle.h"

RotateAngle::RotateAngle(double angle, double speed, bool absolute) :
	angle(angle),
	speed(speed),
	absolute(absolute)
{
	angle = fmod(angle, 360);
	speed = fabs(speed);
	// Use Requires() here to declare subsystem dependencies
	Requires(&Robot::drivetrain);
}

// Called just before this Command runs the first time
void RotateAngle::Initialize() {
	if (!absolute)	// relative
		angle += Robot::drivetrain.GetGyro().GetAngle();
		angle = fmod(angle, 360);
}

// Called repeatedly when this Command is scheduled to run
void RotateAngle::Execute() {
	double current_angle = fmod(Robot::drivetrain.GetGyro().GetAngle(), 360);

	if (fmod(angle + current_angle, 360) > 180) {
		Robot::drivetrain.Drive(0, speed); // right
	}
	else {
		Robot::drivetrain.Drive(0, -speed); // left
	}

}

// Make this return true when this Command no longer needs to run execute()
bool RotateAngle::IsFinished() {
	double current_angle = fmod(Robot::drivetrain.GetGyro().GetAngle(), 360);
	return fabs(current_angle - angle) <= 10;
}

// Called once after isFinished returns true
void RotateAngle::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RotateAngle::Interrupted() {

}
