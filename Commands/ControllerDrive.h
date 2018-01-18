/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <Commands/Command.h>

/**
 * Have the robot drive tank style using the PS3 Joystick until interrupted.
 */
class ControllerDrive : public frc::Command {
public:
	ControllerDrive();
	void Execute() override;
	bool IsFinished() override;
	void End() override;
};
