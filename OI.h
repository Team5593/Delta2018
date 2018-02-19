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

	JoystickButton button_a{&controller, 1};
	JoystickButton button_b{&controller, 2};
	JoystickButton button_x{&controller, 3};
	JoystickButton button_y{&controller, 4};
};
