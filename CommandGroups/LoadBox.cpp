#include "LoadBox.h"

LoadBox::LoadBox() {
	//AddParallel(new GrabClose());
	AddSequential(new FeedBox(1));
}
