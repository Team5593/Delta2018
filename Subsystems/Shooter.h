#pragma once

#include "../RobotMap.h"
#include <Commands/Subsystem.h>
#include <Talon.h>
#include <DoubleSolenoid.h>
#include <Solenoid.h>

class Shooter: public frc::Subsystem
{
public:
	Shooter();

	void SetFlywheels(double speed);

	void SetPivot(bool state);

	frc::DoubleSolenoid& GetPivotSolenoid();

private:
	// Motors
	frc::Talon motor_flywheel_left{2};
	frc::Talon motor_flywheel_right{3};

	// Solenoids (pneumatics)
	frc::DoubleSolenoid solenoid_pivot{2, 3};
};
