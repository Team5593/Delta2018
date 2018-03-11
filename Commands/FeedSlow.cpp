#include "FeedSlow.h"

FeedSlow::FeedSlow(double timeout):
	frc::TimedCommand(timeout)
{
	Requires(&Robot::feeder);
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void FeedSlow::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void FeedSlow::Execute() {
	Robot::feeder.Slow();

}

// Called once after isFinished returns true
void FeedSlow::End() {
	Robot::feeder.Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void FeedSlow::Interrupted() {
	End();
}
