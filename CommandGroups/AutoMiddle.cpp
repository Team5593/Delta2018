#include "AutoMiddle.h"

#include <Commands/MoveTimed.h>
#include <CommandGroups/ShootBoxLow.h>
#include <Robot.h>

AutoMiddle::AutoMiddle(char pos) {
	AddSequential(new MoveTimed(2.5, 0.8)); // move away from wall
	if (pos == Robot::Right) // when on right
		AddSequential(new ShootBoxLow);
}
