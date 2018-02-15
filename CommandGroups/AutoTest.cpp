#include "AutoTest.h"

AutoTest::AutoTest() {
	for (int i = 0; i < 4; i++) {
		AddSequential(new MoveDistance(48, 0.75));
		AddSequential(new RotateAngle(90, 0.75));
	}
}
