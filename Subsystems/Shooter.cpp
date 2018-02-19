#include <Subsystems/Shooter.h>
#include <iostream>

Shooter::Shooter()
	: frc::Subsystem("Shooter")
{
	motor_flywheel_left.SetInverted(false);
	motor_flywheel_right.SetInverted(true);
}

void Shooter::InitDefaultCommand() {
	//SetDefaultCommand(new ControllerShoot());
}

void Shooter::SetFlywheels(double speed) {
	motor_flywheel_left.Set(speed);
	motor_flywheel_right.Set(speed);
	std::cout << "That's pretty fly" << std::endl;
}

void Shooter::SetPivot(bool state) {
	if (state == true) {
		solenoid_pivot.Set(DoubleSolenoid::Value::kForward);
	}
	else {
		solenoid_pivot.Set(DoubleSolenoid::Value::kReverse);
	}
}

frc::DoubleSolenoid& Shooter::GetPivotSolenoid()
{
	return solenoid_pivot;
}
