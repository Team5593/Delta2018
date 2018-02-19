#ifndef PreSpin_H
#define PreSpin_H

#include <Commands/TimedCommand.h>
#include <Robot.h>

class PreSpin : public frc::TimedCommand {
public:
	PreSpin();
	void Initialize();
	void Execute();
	void End();
	void Interrupted();
};

#endif  // PreSpin_H
