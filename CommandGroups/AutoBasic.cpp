#include "AutoBasic.h"

#include <Commands/MoveDistance.h>

AutoBasic::AutoBasic() {
	AddSequential(new MoveDistance(12 * 12, 0.75)); // 12 feet
}
