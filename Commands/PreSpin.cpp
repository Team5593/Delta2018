#include "PreSpin.h"

PreSpin::PreSpin() : TimedCommand(3) {
	Requires(&Robot::shooter);
}

// Called just before this Command runs the first time
void PreSpin::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void PreSpin::Execute() {
	Robot::shooter.SetFlywheels(1.0);
}

// Called once after command times out
void PreSpin::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PreSpin::Interrupted() {

}
