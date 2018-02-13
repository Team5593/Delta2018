#ifndef RotateAngle_H
#define RotateAngle_H

#include "../Robot.h"
#include <Commands/Command.h>
#include <PIDController.h>
#include <PIDOutput.h>

class RotateAngle : public frc::Command {
public:
	RotateAngle(double angle, double speed);
	void Initialize();
	void Execute();
	void End();
	bool IsFinished();
	void Interrupted();
private:
	frc::PIDController pid;
	double angle;
	double speed;
};

class TurnDriveTrain : public PIDOutput {
public:
	virtual ~TurnDriveTrain() = default;
	void PIDWrite(double output);
};

#endif  // RotateAngle_H
