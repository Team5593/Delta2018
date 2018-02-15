#pragma once

#include <Commands/Command.h>

using namespace frc;

class ControllerDrive : public Command {
public:
	ControllerDrive();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};
