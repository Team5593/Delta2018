#include <CommandGroups/ShootBoxHigh.h>

#include <Commands/PivotUp.h>
#include <Commands/PivotDown.h>
#include <Commands/FeedBox.h>
#include <Commands/SpinFlyWheels.h>

ShootBoxHigh::ShootBoxHigh() {
		AddSequential(new PivotUp());

		// Shoot
		AddSequential(new SpinFlyWheels(1));
		AddParallel(new FeedBox(2));
		AddSequential(new SpinFlyWheels(2));

		AddSequential(new PivotDown());
}
