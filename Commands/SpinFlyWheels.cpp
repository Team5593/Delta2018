#include "SpinFlyWheels.h"
#include <XboxController.h>

SpinFlyWheels::SpinFlyWheels(double timeout):
	TimedCommand(timeout)
{
	Requires(&Robot::shooter);
}

void SpinFlyWheels::Initialize() {

}

void SpinFlyWheels::Execute() {
	auto& joystick = Robot::oi.GetController();
	double speed = 1.0;
	if (joystick.GetBumper(XboxController::JoystickHand::kLeftHand)) speed = 0.95;
	else if (joystick.GetBumper(XboxController::JoystickHand::kRightHand)) speed = 0.90;
	Robot::shooter.SetFlywheels(speed);
}

void SpinFlyWheels::End() {
	Robot::shooter.SetFlywheels(0.0);
}

void SpinFlyWheels::Interrupted() {
	End();
}
