#include "SpitOutBox.h"

FeedBox::FeedBox() {
	Requires(&Robot::shooter);
	Requires(&Robot::grompers)
}

void FeedBox::Initialize() {
	Robot::grompers.WheelsForward();
	Robot::grompers.OpenGrabbers();
}

void FeedBox::Execute() {
	Robot::shooter.SetFeeder(-0.75);
}

void FeedBox::End() {
	Robot::shooter.SetFeeder(0.0);
	Robot::grompers.CloseGrabbers();
	Robot::grompers.WheelsStop();
}

void FeedBox::Interrupted() {
	End();
}

