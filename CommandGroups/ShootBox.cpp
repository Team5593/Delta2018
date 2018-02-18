#include "ShootBox.h"

ShootBox::ShootBox() {
	// Set Up
	AddParallel(new PivotUp());
	AddSequential(new SpinFlywheels(2));

	// Shoot
	AddParallel(new SpinFlywheels(2));
	AddSequential(new LoadBox(3));

	// Reset
	AddSequential(new PivotDown());
}
