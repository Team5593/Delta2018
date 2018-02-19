#include "FeedBox.h"

FeedBox::FeedBox(double timeout):
	TimedCommand(2)
{
	Requires(&Robot::feeder);
}

void FeedBox::Initialize() {

}

void FeedBox::Execute() {
	Robot::feeder.Forward();
}

void FeedBox::End() {
	Robot::feeder.Stop();
}

void FeedBox::Interrupted() {
	End();
}
