#include "BasicAuto.h"

#include <Commands/MoveDistance.h>

BasicAuto::BasicAuto() {
	AddSequential(new MoveDistance(12 * 12, 0.75)); // 12 feet
}
