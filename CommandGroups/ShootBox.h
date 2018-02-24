#ifndef ShootBox_H
#define ShootBox_H

#include <Commands/CommandGroup.h>
#include <Robot.h>

class ShootBox: public frc::CommandGroup {
public:
	enum Height { Low, High };
	ShootBox(Height height);
};

#endif // ShootBox_H
