#include "GrabOpen.h"

GrabOpen::GrabOpen() {
	Requires(&Robot::grompers);
}

void GrabOpen::Initialize() {

}

void GrabOpen::Execute() {
	Robot::grompers.WheelsReverse();
	Robot::grompers.OpenGrabbers();
}

bool GrabOpen::IsFinished() {
	return false;
}

void GrabOpen::End() {
	Robot::grompers.WheelsStop();
	Robot::grompers.CloseGrabbers();
}

void GrabOpen::Interrupted() {
	End();
}
