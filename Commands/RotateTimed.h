#ifndef RotateTimed_H
#define RotateTimed_H

#include <Commands/TimedCommand.h>
#include "../Robot.h"

class RotateTimed : public frc::TimedCommand {
public:
	RotateTimed(double timeout, double speed);
	void Initialize();
	void Execute();
	void End();
	void Interrupted();
private:
	double speed;
};

#endif  // RotateTimed_H
