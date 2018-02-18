#include <Subsystems/Shooter.h>
#include <iostream>

Shooter::Shooter()
	: frc::Subsystem("Shooter")
{
	motor_feeder_left.SetInverted(false);
	motor_feeder_right.SetInverted(true);
}

void Shooter::InitDefaultCommand() {
	//SetDefaultCommand(new ControllerShoot());
}

void Shooter::SetFlywheels(double speed) {
	motor_flywheel_left.Set(speed);
	motor_flywheel_right.Set(speed);
	std::cout << "That's pretty fly" << std::endl;
}

void Shooter::SetFeeder(double speed) {
	motor_feeder_left.Set(speed);
	motor_feeder_right.Set(speed);
}

void Shooter::SetPivot(bool state) {
	if (state == true) {
		solenoid_pivot.Set(DoubleSolenoid::Value::kForward);
	}
	else {
		solenoid_pivot.Set(DoubleSolenoid::Value::kOff);
	}
}

frc::DoubleSolenoid& Shooter::GetPivotSolenoid()
{
	return solenoid_pivot;
}
