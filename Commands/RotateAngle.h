#ifndef RotateAngle_H
#define RotateAngle_H

#include <Commands/Command.h>
#include "../Robot.h"

class RotateAngle : public frc::Command {
public:
	RotateAngle(double angle, double speed, bool absolute = true);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	double angle, speed;
	bool absolute;
};

#endif  // RotateAngle_H
