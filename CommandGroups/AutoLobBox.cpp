#include "AutoLobBox.h"

AutoLobBox::AutoLobBox(char pos) {
	AddSequential(new MoveDistance(148, 0.8));
	double angle = 0;
	if (pos == Robot::Right)
		angle = 90;
	else if (pos == Robot::Left)
		angle = -90;
	AddSequential(new RotateAngle(angle, 0.75));
	AddSequential(new SpinFlyWheels(2));
}
