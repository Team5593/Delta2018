#ifndef SpitOutBox_H
#define SpitOutBox_H

#include <Commands/Command.h>
#include <Robot.h>

class SpitOutBox : public frc::Command {
public:
	SpitOutBox();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif // SpitOutBox_H
