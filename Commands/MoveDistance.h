#ifndef MoveDistance_H
#define MoveDistance_H

#include "../Robot.h"
#include <Commands/Command.h>
#include <PIDController.h>
#include <PIDOutput.h>

using namespace frc;

class MoveDistance : public Command {
public:
	MoveDistance(double distance, double speed);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	PIDController pid;
	double distance;
	double speed;
};

class MoveDriveTrain : public PIDOutput {
public:
	virtual ~MoveDriveTrain() = default;
	void PIDWrite(double output);
};

#endif  // MoveDistance_H
