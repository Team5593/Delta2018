#ifndef PivotDown_H
#define PivotDown_H

#include <Commands/InstantCommand.h>
#include <Robot.h>

class PivotDown : public frc::InstantCommand{
public:
	PivotDown();
	void Initialize();
};

#endif // PivotDown_H
