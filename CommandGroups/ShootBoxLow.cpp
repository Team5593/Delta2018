#include <CommandGroups/ShootBoxLow.h>

#include <Commands/PivotDown.h>
#include <Commands/FeedBox.h>
#include <Commands/SpinFlyWheels.h>

ShootBoxLow::ShootBoxLow() {
		AddSequential(new PivotDown());
		// Lob
		AddParallel(new FeedBox(2));
		AddSequential(new SpinFlyWheels(2));
}
