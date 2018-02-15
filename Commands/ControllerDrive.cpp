/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "ControllerDrive.h"
#include <Robot.h>

using namespace frc;

ControllerDrive::ControllerDrive() :
	Command("ControllerDrive")
{
	Requires(&Robot::drivetrain);
}

void ControllerDrive::Initialize() { }

void ControllerDrive::Execute() {
	auto& joystick = Robot::oi.GetController();

	auto speed = joystick.GetRawAxis(1);
	auto heading = joystick.GetRawAxis(4);

	Robot::drivetrain.Drive(speed, heading);
}

bool ControllerDrive::IsFinished() {
	return false;
}

void ControllerDrive::End() {
	Robot::drivetrain.Drive(0, 0);
}

void ControllerDrive::Interrupted() { End(); }
