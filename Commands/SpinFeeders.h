#ifndef SpinFeeders_H
#define SpinFeeders_H

#include <Commands/TimedCommand.h>

class SpinFeeders : public frc::TimedCommand {
public:
	SpinFeeders(double timeout);
	void Initialize();
	void Execute();
	void End();
	void Interrupted();
};

#endif  // SpinFeeders_H
