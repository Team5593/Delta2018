#include "SpitOutBox.h"

SpitOutBox::SpitOutBox() {
	Requires(&Robot::grompers);
	Requires(&Robot::feeder);
}

void SpitOutBox::Initialize() {
	Robot::grompers.WheelsForward();
	Robot::grompers.OpenGrabbers();
}

void SpitOutBox::Execute() {
	Robot::feeder.Reverse();
}

bool SpitOutBox::IsFinished() {
	return false;
}

void SpitOutBox::End() {
	Robot::feeder.Stop();
	Robot::grompers.WheelsStop();
}

void SpitOutBox::Interrupted() {
	End();
}

