#include <Commands/ShootBox.h>
#include <Robot.h>

ShootBox::ShootBox(double timeout):
	TimedCommand(timeout)
{
	// Use Requires() here to declare subsystem dependencies
	Requires(&Robot::shooter);
}

// Called just before this Command runs the first time
void ShootBox::Initialize() {
}

// Called repeatedly when this Command is scheduled to run
void ShootBox::Execute() {
	Robot::shooter.SetFlywheels(0.95);
}

// Called once after isFinished returns true
void ShootBox::End() {
	Robot::shooter.SetFlywheels(0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ShootBox::Interrupted() {
}
