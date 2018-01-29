#include "MoveDistance.h"

MoveDistance::MoveDistance(double distance, double speed):
	distance(distance),
	speed(speed)
{
	// Use Requires() here to declare subsystem dependencies
	Requires(&Robot::drivetrain);
}

// Called just before this Command runs the first time
void MoveDistance::Initialize() {
	Robot::drivetrain.ResetDistance();
}

// Called repeatedly when this Command is scheduled to run
void MoveDistance::Execute() {
	if (distance < 0) speed = -speed;
	distance = fabs(distance);

	Robot::drivetrain.Drive(speed, 0);
}

// Make this return true when this Command no longer needs to run execute()
bool MoveDistance::IsFinished() {
	return fabs(Robot::drivetrain.GetDistance()) >= fabs(distance);
}

// Called once after isFinished returns true
void MoveDistance::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MoveDistance::Interrupted() {

}
