#include <Commands/SpinFeeders.h>
#include <Robot.h>

SpinFeeders::SpinFeeders(double timeout):
	TimedCommand(timeout)
{
	Requires(&Robot::shooter);
}

void SpinFeeders::Initialize() {
}

void SpinFeeders::Execute() {
	Robot::shooter.SetFeeder(1.0);
}

void SpinFeeders::End() {
	Robot::shooter.SetFeeder(0.0);
}

void SpinFeeders::Interrupted() {
}
