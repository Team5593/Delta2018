/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"

#include <WPILib.h>

#include <Commands/GrabOpen.h>
#include <Commands/GrabClose.h>
#include <CommandGroups/LoadBox.h>
#include <CommandGroups/ShootBox.h>

using namespace frc;

OI::OI() {
	button_open.WhenPressed(new GrabOpen());
	button_close.WhenPressed(new GrabClose());
	button_load.WhenPressed(new LoadBox());
	button_shoot.WhenPressed(new ShootBox());
}

XboxController& OI::GetController() {
	return controller;
}
