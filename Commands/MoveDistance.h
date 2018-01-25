#ifndef MoveDistance_H
#define MoveDistance_H

#include <Commands/Command.h>
#include "../Robot.h"

class MoveDistance : public frc::Command {
public:
	MoveDistance(double distance, double speed);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	double distance;
	double speed;
};

#endif  // MoveDistance_H
