#include "PivotDown.h"

PivotDown::PivotDown() {
	Requires(&Robot::shooter);
}

void PivotDown::Initialize() {
	Robot::shooter.SetPivot(false);
}

void PivotDown::Execute() {
	
}

bool PivotDown::IsFinished() {
	return true;
}

void PivotDown::End() {

}

void PivotDown::Interrupted() {
	End();
}
