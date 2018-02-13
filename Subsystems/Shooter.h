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

	void InitDefaultCommand() override;

	void SetFlywheels(double speed);

	void SetFeeder(double speed);

	frc::DoubleSolenoid& GetPivotSolenoid();

private:
	// Motors
	frc::Talon motor_flywheel_left{2};
	frc::Talon motor_flywheel_right{3};

	frc::Talon motor_feeder_left{4};
	frc::Talon motor_feeder_right{5};

	// Solenoids (pneumatics)
	frc::DoubleSolenoid solenoid_pivot{0, 1};
};
