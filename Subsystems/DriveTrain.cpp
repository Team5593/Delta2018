#include "DriveTrain.h"

#include <Joystick.h>
#include <SmartDashboard/SmartDashboard.h>
#include <iostream>
#include "../Commands/ControllerDrive.h"

DriveTrain::DriveTrain():
	frc::Subsystem("DriveTrain"),
	motor_left(MTR_DRIVE_LEFT),
	motor_right(MTR_DRIVE_RIGHT),
	robot_drive(motor_left, motor_right),
	encoder_left(ENC_LEFT_A, ENC_LEFT_B),
	encoder_right(ENC_RIGHT_A, ENC_LEFT_B),
	accelerometer(),
	gyro(GYRO_CHANNEL)
{
	AddChild("Left Motor", motor_left);
	AddChild("Right Motor", motor_right);
	AddChild("Left Encoder", encoder_left);
	AddChild("Right Encoder", encoder_right);
	AddChild("Accelerometer", accelerometer);
	AddChild("Gyro", gyro);

	motor_left.SetInverted(true);
	motor_right.SetInverted(true);
	
	robot_drive.SetDeadband(0.2);

	const double distance_per_pulse = (1 / 14.1647899352) * 2;
	encoder_left.SetDistancePerPulse(distance_per_pulse);
	encoder_right.SetDistancePerPulse(distance_per_pulse);
}

void DriveTrain::InitDefaultCommand() {
	SetDefaultCommand(new ControllerDrive());
}

void DriveTrain::Drive(double forward, double turn) {
	robot_drive.ArcadeDrive(-forward, turn, true);
}

double DriveTrain::GetDistance() {
	double average;
	average = (encoder_left.GetDistance() + encoder_right.GetDistance()) * 0.5;
	return average;
}

void DriveTrain::ResetDistance() {
	encoder_left.Reset();
	encoder_right.Reset();
}

frc::PWMSpeedController& DriveTrain::GetMotorLeft() {
	return motor_left;
}

frc::PWMSpeedController& DriveTrain::GetMotorRight() {
	return motor_right;
}

frc::DifferentialDrive& DriveTrain::GetRobotDrive() {
	return robot_drive;
}

frc::Encoder& DriveTrain::GetEncoderLeft() {
	return encoder_left;
}

frc::Encoder& DriveTrain::GetEncoderRight() {
	return encoder_right;
}

frc::Accelerometer& DriveTrain::GetAccelerometer() {
	return accelerometer;
}

frc::GyroBase& DriveTrain::GetGyro() {
	return gyro;
}