#ifndef MoveTimed_H
#define MoveTimed_H

#include "Commands/TimedCommand.h"

class MoveTimed : public frc::TimedCommand {
public:
	MoveTimed(double timeout, double speed);
	void Initialize();
	void Execute();
	void End();
	void Interrupted();
private:
	double speed;
};

#endif  // MoveTimed_H
