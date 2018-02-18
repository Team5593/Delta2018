#include "Grompers.h"
#include "../RobotMap.h"

Grompers::Grompers():
	frc::Subsystem("ExampleSubsystem")
{
	wheel_left.SetInverted(true);
	wheel_right.SetInverted(false);
}

void Grompers::InitDefaultCommand() {
}

#include <iostream>

void Grompers::OpenGrabbers() {
	grabbers.Set(frc::DoubleSolenoid::Value::kForward);
	std::cout << "Open Grabbers" << std::endl;
}

void Grompers::CloseGrabbers() {
	grabbers.Set(frc::DoubleSolenoid::Value::kReverse);
	std::cout << "Close Grabbers" << std::endl;
}

void Grompers::WheelsForward() {
	double speed = 1.0;
	wheel_left.Set(speed);
	wheel_right.Set(speed);
}

void Grompers::WheelsReverse() {
	double speed = -1.0;
	wheel_left.Set(speed);
	wheel_right.Set(speed);
}

void Grompers::WheelsStop() {
	wheel_left.StopMotor();
	wheel_right.StopMotor();
}
