#include "ShootBox.h"

ShootBox::ShootBox() {
	// Set Up
	AddSequential(new PivotUp());
	AddSequential(new PreSpin());

	// Shoot
	AddSequential(new SpinFlyWheels(2));

	// Reset
	AddSequential(new PivotDown());
}
