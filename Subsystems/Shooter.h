#pragma once

#include "../RobotMap.h"
#include <Commands/Subsystem.h>
#include <Talon.h>
#include <DoubleSolenoid.h>

class Shooter: public frc::Subsystem
{
public:
	Shooter();

	void InitDefaultCommand() override;

	void SetFlywheels(double speed);

	void SetPivotUp();
	void SetPivotDown();
	void SetPivotOff();

private:
	// Motors
	frc::Talon motor_flywheel_left{9};
	frc::Talon motor_flywheel_right{8};

	// Solenoids (pneumatics)
	frc::DoubleSolenoid solenoid_pivot{0, 1};
};