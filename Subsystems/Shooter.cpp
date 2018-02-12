#include <Subsystems/Shooter.h>
#include <iostream>

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
	std::cout << "That's pretty fly" << std::endl;
}

frc::DoubleSolenoid& Shooter::GetPivotSolenoid()
{
	return solenoid_pivot;
}
