#include "AutoMiddle.h"

#include <Commands/MoveTimed.h>
#include <CommandGroups/ShootBoxLow.h>
#include <Robot.h>

AutoMiddle::AutoMiddle() {
	AddSequential(new MoveTimed(2.5, 0.8)); // move away from wall
	if (Robot::GetSwitchSide() == Robot::Right) // when on right
		AddSequential(new ShootBoxLow);
}
