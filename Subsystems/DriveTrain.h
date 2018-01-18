#pragma once

#include "../RobotMap.h"
#include <Commands/Subsystem.h>
#include <Drive/DifferentialDrive.h>
#include <Talon.h>
#include <Encoder.h>

namespace frc {
class Joystick;
}

class DriveTrain: public frc::Subsystem
{
public:
	DriveTrain();

	void InitDefaultCommand() override;

	void Drive(double left, double right);
private:
	frc::Talon motor_left{MTR_DRIVE_LEFT};
	frc::Talon motor_right{MTR_DRIVE_RIGHT};

	frc::DifferentialDrive robot_drive{motor_left, motor_right};

	frc::Encoder encoder_left{ENC_LEFT_A, ENC_LEFT_B};
	frc::Encoder encoder_right{ENC_RIGHT_A, ENC_RIGHT_B};
};