#ifndef PivotUp_H
#define PivotUp_H

#include <Commands/TimedCommand.h>
#include <Robot.h>

class PivotUp : public frc::TimedCommand{
public:
	PivotUp();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif // PivotUp_H
