#include "DriveTrain.h"

#include <Joystick.h>
#include <SmartDashboard/SmartDashboard.h>

#include "../Commands/ControllerDrive.h"

DriveTrain::DriveTrain():
	frc::Subsystem("DriveTrain"),
	robot_drive(motor_left, motor_right)
{
	AddChild("Left Motor", motor_left);
	AddChild("Right Motor", motor_right);
	AddChild("Left Encoder", encoder_left);
	AddChild("Right Encoder", encoder_right);
}

void DriveTrain::InitDefaultCommand() {
	SetDefaultCommand(new ControllerDrive());
}

void DriveTrain::Drive(double left, double right) {
	robot_drive.TankDrive(left, right);
}
