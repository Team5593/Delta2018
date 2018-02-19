#include "Feeder.h"

Feeder::Feeder():
	frc::Subsystem("Feeder")
{
	runner_left.SetInverted(false);
	runner_right.SetInverted(true);
	SetSpeed(1.0);
}

void Feeder::Forward() {
	runner_left.Set(speed);
	runner_right.Set(speed);
}

void Feeder::Reverse() {
	runner_left.Set(-speed);
	runner_right.Set(-speed);
}

void Feeder::Stop() {
	runner_left.StopMotor();
	runner_right.StopMotor();
}

void Feeder::SetSpeed(double value) {
	speed = value;
}

