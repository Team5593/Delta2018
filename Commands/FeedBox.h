#ifndef FeedBox_H
#define FeedBox_H

#include <Commands/TimedCommand.h>
#include <Robot.h>

class FeedBox : public frc::TimedCommand {
public:
	FeedBox(double timeout);
	void Initialize();
	void Execute();
	void End();
	void Interrupted();
};

#endif  // FeedBox_H
