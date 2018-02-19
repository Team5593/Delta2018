#include "PivotUp.h"

PivotUp::PivotUp():
	TimedCommand(1)
{
	Requires(&Robot::shooter);
}

void PivotUp::Initialize() {
	Robot::shooter.SetPivot(true);
}

void PivotUp::Execute() {
	Robot::shooter.SetPivot(true);
}

bool PivotUp::IsFinished() {
	return true;
}

void PivotUp::End() {

}

void PivotUp::Interrupted() {
	End();
}
