#ifndef ShootBox_H
#define ShootBox_H

#include <Commands/TimedCommand.h>

class ShootBox : public frc::TimedCommand {
public:
	ShootBox(double timeout);
	void Initialize();
	void Execute();
	void End();
	void Interrupted();
};

#endif  // ShootBox_H
