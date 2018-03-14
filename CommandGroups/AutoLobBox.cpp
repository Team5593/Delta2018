#include "AutoLobBox.h"

#include <Robot.h>
#include <Commands/MoveDistance.h>
#include <Commands/RotateAngle.h>
#include <Commands/MoveTimed.h>
#include <CommandGroups/ShootBoxLow.h>

AutoLobBox::AutoLobBox(char pos) {
	AddSequential(new MoveDistance(128, 0.8));
	double angle = 90;
	if (pos == Robot::Right)
		angle = -90;
	AddSequential(new RotateAngle(angle, 0.75));
	AddSequential(new MoveTimed(1, 0.9)); // bump up against the fence
	AddSequential(new ShootBoxLow());
}
