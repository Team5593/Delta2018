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

	JoystickButton button_open{&controller, 1};
	JoystickButton button_close{&controller, 2};
	JoystickButton button_load{&controller, 3};
	JoystickButton button_shoot{&controller, 4};
};
