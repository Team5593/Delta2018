#pragma once

#include <XboxController.h>
#include <Buttons/JoystickButton.h>

using namespace frc;

class OI {
public:
	OI();

	XboxController& GetController();
private:
	XboxController controller{0}; // xbox controller

	JoystickButton button_shooter_pivot{&controller, 4};
	JoystickButton button_shoot{&controller, 1};
	JoystickButton button_feed{&controller, 2};
};
