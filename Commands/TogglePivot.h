#ifndef TogglePivot_H
#define TogglePivot_H

#include "../Robot.h"

class TogglePivot : public frc::Command {
public:
	TogglePivot();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // TogglePiot_H
