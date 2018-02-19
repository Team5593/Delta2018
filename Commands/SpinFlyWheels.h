#ifndef SpinFlyWheels_H
#define SpinFlyWheels_H

#include <Commands/TimedCommand.h>
#include <Robot.h>

class SpinFlyWheels : public frc::TimedCommand {
public:
	SpinFlyWheels(double timeout);
	void Initialize();
	void Execute();
	void End();
	void Interrupted();
};

#endif  // SpinFlyWheels_H
