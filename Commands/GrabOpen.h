#ifndef GrabOpen_H
#define GrabOpen_H

#include <Commands/Command.h>
#include <Robot.h>

class GrabOpen : public frc::Command {
public:
	GrabOpen();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // GrabOpen_H
