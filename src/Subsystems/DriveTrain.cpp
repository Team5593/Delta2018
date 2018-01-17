#include "DriveTrain.h"

DriveTrain::DriveTrain():
	: frc::Subsystem("DriveTrain")
{
	AddChild("Left Motor", motor_left);
	AddChild("Right Motor", motor_right);
	AddChild("Left Encoder", encoder_left);
	AddChild("Right Encoder", encoder_right);
}

void DriveTrain::InitDefaultCommand() {
	//SetDefaultCommand(new TankDriveWithJoystick());
}

void DriveTrain::Drive(double left, double right) {
	robot_drive.TankDrive(left, right);
}