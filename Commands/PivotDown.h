#ifndef PivotDown_H
#define PivotDown_H

#include <Commands/Command.h>
#include <Robot.h>

class PivotDown : public frc::Command{
public:
	PivotDown();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif // PivotDown_H
