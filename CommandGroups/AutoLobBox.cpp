#include "AutoLobBox.h"

#include <Robot.h>
#include <Commands/MoveDistance.h>
#include <Commands/RotateAngle.h>
#include <CommandGroups/ShootBoxLow.h>

AutoLobBox::AutoLobBox(char pos) {
	AddSequential(new MoveDistance(148, 0.8));
	double angle = 0;
	if (pos == Robot::Right)
		angle = 90;
	else if (pos == Robot::Left)
		angle = -90;
	AddSequential(new RotateAngle(angle, 0.75));
	AddSequential(new ShootBoxLow());
}
