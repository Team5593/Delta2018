#include "Shooter.h"

Shooter::Shooter()
	: frc::Subsystem("Shooter")
{

}

void Shooter::InitDefaultCommand() {
	//SetDefaultCommand(new ControllerShoot());
}

void Shooter::SetFlywheels(double speed) {
	motor_flywheel_left.Set(speed);
	motor_flywheel_right.Set(speed);
}

void Shooter::SetPivotUp() {
	solenoid_pivot.Set(frc::DoubleSolenoid::Value::kForward);
}

void Shooter::SetPivotDown() {
	solenoid_pivot.Set(frc::DoubleSolenoid::Value::kReverse);
}

void Shooter::SetPivotOff() {
	solenoid_pivot.Set(frc::DoubleSolenoid::Value::kOff);
}