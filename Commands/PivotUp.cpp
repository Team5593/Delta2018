#include "PivotUp.h"

PivotUp::PivotUp() {
	Requires(&Robot::shooter);
}

void PivotUp::Initialize() {
	Robot::shooter.SetPivot(true);
}
