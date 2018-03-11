#ifndef SpinFlywheelsSlow_H
#define SpinFlywheelsSlow_H

#include <Robot.h>
#include <Commands/TimedCommand.h>

class SpinFlywheelsSlow : public frc::TimedCommand {
public:
	SpinFlywheelsSlow(double timeout);
	void Initialize();
	void Execute();
	void End();
	void Interrupted();
};

#endif  // SpinFlywheelsSlow_H
