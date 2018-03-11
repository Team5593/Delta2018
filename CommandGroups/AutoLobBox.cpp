#include "AutoLobBox.h"

#include <Robot.h>
#include <Commands/MoveDistance.h>
#include <Commands/RotateAngle.h>
#include <Commands/MoveTimed.h>
#include <CommandGroups/ShootBoxLow.h>

AutoLobBox::AutoLobBox(char pos) {
	AddSequential(new MoveDistance(130, 0.75));
	double angle = 90;
	if (pos == Robot::Right)
		angle = -90;
	AddSequential(new RotateAngle(angle, 0.75));
	AddSequential(new MoveTimed(1.5, 0.75)); // bump up against the fence
	AddSequential(new ShootBoxLow());
}
