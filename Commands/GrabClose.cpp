#include "GrabClose.h"

GrabClose::GrabClose() {
	Requires(&Robot::grompers);
}

void GrabClose::Initialize() {

}

void GrabClose::Execute() {
	Robot::grompers.WheelsReverse();
	Robot::grompers.CloseGrabbers();
}

bool GrabClose::IsFinished() {
	return false;
}

void GrabClose::End() {
}

void GrabClose::Interrupted() {
	End();
}
