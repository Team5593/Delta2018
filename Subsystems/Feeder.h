#ifndef Feeder_H
#define Feeder_H

#include <Commands/Subsystem.h>
#include <RobotMap.h>
#include <Spark.h>

class Feeder : public frc::Subsystem {
private:
	frc::Spark runner_left{MTR_FEEDER_LEFT};
	frc::Spark runner_right{MTR_FEEDER_RIGHT};

	double speed;
public:
	Feeder();

	void Forward();
	void Reverse();
	void Stop();

	void SetSpeed(double value);
};

#endif  // Grompers_H
