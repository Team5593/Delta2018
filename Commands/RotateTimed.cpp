#include "RotateTimed.h"

RotateTimed::RotateTimed(double timeout, double speed) :
	TimedCommand(timeout),
	speed(speed)
{
	// Use Requires() here to declare subsystem dependencies
	Requires(&Robot::drivetrain);
}

// Called just before this Command runs the first time
void RotateTimed::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void RotateTimed::Execute() {
	Robot::drivetrain.Drive(0.0, speed);
}

// Called once after command times out
void RotateTimed::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RotateTimed::Interrupted() {

}
