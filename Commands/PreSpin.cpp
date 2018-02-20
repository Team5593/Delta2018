#include "PreSpin.h"

PreSpin::PreSpin(double timeout):
	TimedCommand(timeout)
{
	Requires(&Robot::shooter);
}

void PivotUp::Initialize() {

}

void PivotUp::Execute() {
	Robot::shooter.SetFlywheels(1.0);
}

bool PivotUp::IsFinished() {
	return true;
}

void PivotUp::End() {
	Robot::shooter.SetFlywheels(0.0);
}

void PivotUp::Interrupted() {
	End();
}

