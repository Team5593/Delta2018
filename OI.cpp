#include <CommandGroups/ShootBoxLow.h>
#include "OI.h"

#include <WPILib.h>

#include <Commands/GrabOpen.h>
#include <Commands/FeedSlow.h>
#include <Commands/SpitOutBox.h>
#include <CommandGroups/ShootBoxLow.h>
#include <CommandGroups/ShootBoxHigh.h>
#include <Commands/PivotDown.h>

using namespace frc;

OI::OI() {
	button_a.ToggleWhenPressed(new GrabOpen());
	button_b.WhileHeld(new FeedSlow(1));
	button_x.WhenPressed(new ShootBoxLow());
	button_y.WhenPressed(new ShootBoxHigh());
	button_start.WhileHeld(new SpitOutBox());
	button_select.WhileHeld(new PivotDown());
}

XboxController& OI::GetController() {
	return controller;
}
