#include <Commands/MoveTimed.h>
#include "../Robot.h"

MoveTimed::MoveTimed(double timeout, double speed) :
	TimedCommand(timeout),
	speed(speed)
{
	Requires(&Robot::drivetrain);
}

// Called just before this Command runs the first time
void MoveTimed::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void MoveTimed::Execute() {
	Robot::drivetrain.Drive(speed, 0.0);
}

// Called once after command times out
void MoveTimed::End() {
	Robot::drivetrain.Drive(0, 0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MoveTimed::Interrupted() {

}
