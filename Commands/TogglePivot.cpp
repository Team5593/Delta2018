#include <Commands/TogglePivot.h>

TogglePivot::TogglePivot() {
	// Use Requires() here to declare subsystem dependencies
	Requires(&Robot::shooter);
}

// Called just before this Command runs the first time
void TogglePivot::Initialize() {
	auto& solenoid = Robot::shooter.GetPivotSolenoid();

	auto value = solenoid.Get();
	switch (value)
	{
	case DoubleSolenoid::kForward: solenoid.Set(DoubleSolenoid::kReverse); break;
	default: solenoid.Set(DoubleSolenoid::kForward);
	}
}

// Called repeatedly when this Command is scheduled to run
void TogglePivot::Execute() {

}

// Make this return true when this Command no longer needs to run execute()
bool TogglePivot::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void TogglePivot::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TogglePivot::Interrupted() {

}
