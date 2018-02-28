/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include <CommandGroups/ShootBoxLow.h>
#include "OI.h"

#include <WPILib.h>

#include <Commands/GrabOpen.h>
#include <Commands/SpitOutBox.h>
#include <CommandGroups/ShootBoxLow.h>
#include <CommandGroups/ShootBoxHigh.h>

using namespace frc;

OI::OI() {
	button_a.ToggleWhenPressed(new GrabOpen());
	button_b.WhenPressed(new SpitOutBox());
	button_x.WhenPressed(new ShootBoxLow());
	button_y.WhenPressed(new ShootBoxHigh());
}

XboxController& OI::GetController() {
	return controller;
}
