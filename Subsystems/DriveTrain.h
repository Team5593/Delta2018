#pragma once

#include "../RobotMap.h"
#include <Commands/Subsystem.h>
#include <Drive/DifferentialDrive.h>
#include <Talon.h>
#include <Encoder.h>
#include <BuiltInAccelerometer.h>
#include <AnalogGyro.h>

namespace frc {
class Joystick;
}

class DriveTrain: public frc::Subsystem
{
public:
	DriveTrain();

	void InitDefaultCommand() override;

	void Drive(double left, double right);
	
	double GetDistance();
	void ResetDistance();

	// Motors
	frc::Talon motor_left;
	frc::Talon motor_right;

	frc::DifferentialDrive robot_drive;

	// Sensors
	frc::Encoder encoder_left;
	frc::Encoder encoder_right;

	frc::BuiltInAccelerometer accel_internal;

	frc::AnalogGyro gyro;
};
