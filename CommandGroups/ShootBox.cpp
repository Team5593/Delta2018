#include "ShootBox.h"

ShootBox::ShootBox(Height height) {
	if (height = High) {
		// Setup
		AddSequential(new PivotUp());
		// Shoot
		AddSequential(new SpinFlyWheels(1));
		AddParallel(new FeedBox(2));
		AddSequential(new SpinFlyWheels(2));
		// Reset
		AddSequential(new PivotDown());
	}
	else { // Low
		AddSequential(new PivotDown());
		// Lob
		AddParallel(new FeedBox(2));
		AddSequential(new SpinFlyWheels(2));
	}
}
