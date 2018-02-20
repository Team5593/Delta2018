#ifndef PreSpin_H
#define PreSpin_H

#include <Commands/TimedCommand.h>
#include <Robot.h>

class PreSpin: public frc::TimedCommand {
public:
	PreSpin(double timeout);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
	
};

#endif // PreSpin_H
