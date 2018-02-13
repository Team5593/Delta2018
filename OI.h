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

	frc::JoystickButton button_shooter_pivot{&x_joystick, 4};
	frc::JoystickButton button_shoot{&x_joystick, 1};
	frc::JoystickButton button_feed{&x_joystick, 2};
};
