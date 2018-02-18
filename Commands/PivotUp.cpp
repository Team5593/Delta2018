#include "PivotUp.h"

PivotUp::PivotUp() {
	Requires(&Robot::shooter);
}

void PivotUp::Initialize() {
	Robot::shooter.SetPivot(true);
}

void PivotUp::Execute() {
	
}

bool PivotUp::IsFinished() {
	return true;
}

void PivotUp::End() {

}

void PivotUp::Interrupted() {
	End();
}
