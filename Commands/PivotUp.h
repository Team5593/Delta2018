#ifndef PivotUp_H
#define PivotUp_H

#include <Commands/Command.h>
#include <Robot.h>

class PivotUp : public frc::Command{
public:
	PivotUp();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif // PivotUp_H
