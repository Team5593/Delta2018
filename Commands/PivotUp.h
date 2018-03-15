#ifndef PivotUp_H
#define PivotUp_H

#include <Commands/InstantCommand.h>
#include <Robot.h>

class PivotUp : public frc::InstantCommand{
public:
	PivotUp();
	void Initialize();
};

#endif // PivotUp_H
