/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"

#include <WPILib.h>

#include <Commands/TogglePivot.h>
#include <Commands/ShootBox.h>

OI::OI() {
	button_shooter_pivot.WhenPressed(new TogglePivot());
	button_shoot.WhenPressed(new ShootBox(2));
}

frc::Joystick& OI::GetJoystick() {
	return x_joystick;
}
