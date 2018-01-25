/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "ControllerDrive.h"

#include "../Robot.h"

ControllerDrive::ControllerDrive()
    : frc::Command("ControllerDrive")
{
	Requires(&Robot::drivetrain);
}

void ControllerDrive::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void ControllerDrive::Execute() {
	auto& joystick = Robot::oi.GetJoystick();
	Robot::drivetrain.Drive(-joystick.GetRawAxis(1), -joystick.GetRawAxis(4));
}

// Make this return true when this Command no longer needs to run execute()
bool ControllerDrive::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ControllerDrive::End() {
	Robot::drivetrain.Drive(0, 0);
}

void ControllerDrive::Interrupted() {
	End();
}
