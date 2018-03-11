#include "SpinFlywheelsSlow.h"

SpinFlywheelsSlow::SpinFlywheelsSlow(double timeout) : TimedCommand(timeout) {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void SpinFlywheelsSlow::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void SpinFlywheelsSlow::Execute() {
	Robot::shooter.SetFlywheels(0.40);
}

// Called once after command times out
void SpinFlywheelsSlow::End() {
	Robot::shooter.SetFlywheels(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SpinFlywheelsSlow::Interrupted() {

}
