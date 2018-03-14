#include "SpinFlywheelsSlow.h"

SpinFlywheelsSlow::SpinFlywheelsSlow(double timeout):
	TimedCommand(timeout)
{
	Requires(&Robot::shooter);
}

void SpinFlywheelsSlow::Initialize() {

}

void SpinFlywheelsSlow::Execute() {
	Robot::shooter.SetFlywheels(0.40);
}

void SpinFlywheelsSlow::End() {
	Robot::shooter.SetFlywheels(0);
}

void SpinFlywheelsSlow::Interrupted() {
	End();
}
