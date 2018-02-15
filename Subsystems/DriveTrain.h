#pragma once

#include "../RobotMap.h"
#include <Commands/Subsystem.h>
#include <Talon.h>
#include <PWMSpeedController.h>
#include <Drive/DifferentialDrive.h>
#include <Encoder.h>
#include <BuiltInAccelerometer.h>
#include <AnalogGyro.h>

class DriveTrain: public frc::Subsystem
{
public:
	DriveTrain();

	void InitDefaultCommand() override;

	void Drive(double left, double right);
	
	double GetDistance();
	void ResetDistance();

	frc::PWMSpeedController& 	GetMotorLeft();
	frc::PWMSpeedController& 	GetMotorRight();
	frc::DifferentialDrive& 	GetRobotDrive();
	frc::Encoder& 				GetEncoderLeft();
	frc::Encoder& 				GetEncoderRight();
	frc::Accelerometer& 		GetAccelerometer();
	frc::GyroBase& 				GetGyro();

private:
	frc::Talon motor_left;
	frc::Talon motor_right;
	frc::DifferentialDrive robot_drive;

	frc::Encoder encoder_left;
	frc::Encoder encoder_right;
	frc::BuiltInAccelerometer accelerometer;
	frc::AnalogGyro gyro;

};
