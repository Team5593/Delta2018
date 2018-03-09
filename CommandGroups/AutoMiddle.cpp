#include "AutoMiddle.h"

#include <Commands/MoveDistance.h>
#include <Commands/MoveTimed.h>
#include <Commands/RotateAngle.h>

AutoMiddle::AutoMiddle() {
	AddSequential(new MoveDistance(60, 0.75)); // move away from wall
	AddSequential(new RotateAngle(90, 0.75)); // turn to east
	AddSequential(new MoveDistance(132, 0.75)); // move east towards outer fence
	AddSequential(new RotateAngle(-90, 0.75)); // turn to north
	AddSequential(new MoveDistance(150, 0.6)); // cross base line
}
