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

void Feeder::Slow() {
	runner_left.Set(speed * 0.5);
	runner_right.Set(speed * 0.5);
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

