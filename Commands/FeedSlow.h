#ifndef FeedSlow_H
#define FeedSlow_H

#include <Commands/TimedCommand.h>
#include <Robot.h>

class FeedSlow : public frc::TimedCommand {
public:
	FeedSlow(double timeout);
	void Initialize();
	void Execute();
	void End();
	void Interrupted();
};

#endif  // FeedSlow_H
