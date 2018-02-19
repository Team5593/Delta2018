#include "AutoLobBoxRight.h"

AutoLobBoxRight::AutoLobBoxRight() {
	AddSequential(new MoveDistance(148, 0.8));
	AddSequential(new RotateAngle(90, 0.75));
	AddSequential(new SpinFlyWheels(2));
}
