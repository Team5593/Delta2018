#include "FeedBox.h"

FeedBox::FeedBox(double timeout):
	TimedCommand(2)
{
	Requires(&Robot::shooter);
}

void FeedBox::Initialize() {

}

void FeedBox::Execute() {
	Robot::shooter.SetFeeder(0.5);
}

void FeedBox::End() {

}

void FeedBox::Interrupted() {

}
