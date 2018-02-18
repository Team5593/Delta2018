#ifndef GrabClose_H
#define GrabClose_H

#include <Commands/Command.h>
#include <Robot.h>

class GrabClose : public frc::Command{
public:
	GrabClose();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // GrabClose_H
