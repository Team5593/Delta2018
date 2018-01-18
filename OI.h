/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <Joystick.h>
#include <Buttons/JoystickButton.h>

class OI {
public:
	OI();

	frc::Joystick& GetJoystick();
private:
	frc::Joystick x_joystick{0}; // xbox controller

};
