#include "PivotDown.h"

PivotDown::PivotDown() {
	Requires(&Robot::shooter);
}

void PivotDown::Initialize() {
	Robot::shooter.SetPivot(false);
}
