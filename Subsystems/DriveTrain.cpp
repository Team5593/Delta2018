#include "DriveTrain.h"

#include <Joystick.h>
#include <SmartDashboard/SmartDashboard.h>

#include "../Commands/ControllerDrive.h"

DriveTrain::DriveTrain():
	frc::Subsystem("DriveTrain"),
	motor_left(MTR_DRIVE_LEFT),
	motor_right(MTR_DRIVE_RIGHT),
	robot_drive(motor_left, motor_right),
	encoder_left(ENC_LEFT_A, ENC_LEFT_B),
	encoder_right(ENC_RIGHT_A, ENC_LEFT_B),
	accel_internal()
{
	AddChild("Left Motor", motor_left);
	AddChild("Right Motor", motor_right);
	AddChild("Left Encoder", encoder_left);
	AddChild("Right Encoder", encoder_right);
	AddChild("Internal Accelerometer", accel_internal);
	motor_left.SetInverted(true);
	motor_right.SetInverted(true);
	robot_drive.SetDeadband(0.2);
}

void DriveTrain::InitDefaultCommand() {
	SetDefaultCommand(new ControllerDrive());
}

void DriveTrain::Drive(double forward, double turn) {
	robot_drive.ArcadeDrive(forward, turn, true);
}
