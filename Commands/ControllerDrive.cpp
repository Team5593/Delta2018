#include "ControllerDrive.h"

#include <Robot.h>

using namespace frc;

ControllerDrive::ControllerDrive() :
	Command("ControllerDrive")
{
	Requires(&Robot::drivetrain);
}

void ControllerDrive::Initialize() { }

void ControllerDrive::Execute() {
	auto& joystick = Robot::oi.GetController();

	auto forwards = -joystick.GetRawAxis(1);
	auto heading = joystick.GetRawAxis(4);
	auto speed = joystick.GetRawAxis(7);

	speed = 0.5 + (speed * 0.5);

	forwards *= speed;
	heading *= speed;

	Robot::drivetrain.Drive(forwards, heading);
}

bool ControllerDrive::IsFinished() {
	return false;
}

void ControllerDrive::End() {
	Robot::drivetrain.Drive(0, 0);
}

void ControllerDrive::Interrupted() {
	End();
}
