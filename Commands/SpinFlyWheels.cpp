#include "SpinFlyWheels.h"

SpinFlyWheels::SpinFlyWheels(double timeout):
	TimedCommand(timeout)
{
	Requires(&Robot::shooter);
}

void SpinFlyWheels::Initialize() {

}

void SpinFlyWheels::Execute() {
	Robot::shooter.SetFlywheels(1.0);
}

void SpinFlyWheels::End() {
	Robot::shooter.SetFlywheels(0.0);
}

void SpinFlyWheels::Interrupted() {

}
