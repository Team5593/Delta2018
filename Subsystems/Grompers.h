// Chompers + Grabbers = Grompers

#ifndef Grompers_H
#define Grompers_H

#include <Commands/Subsystem.h>
#include <DoubleSolenoid.h>
#include <PWMTalonSRX.h>
#include <RobotMap.h>

class Grompers : public frc::Subsystem {
private:
	frc::PWMTalonSRX wheel_left{MTR_GROMPER_LEFT};
	frc::PWMTalonSRX wheel_right{MTR_GROMPER_RIGHT};
	frc::DoubleSolenoid grabbers{SOL_GROMPERS_F, SOL_GROMPERS_R};
public:
	Grompers();
	void InitDefaultCommand();

	void OpenGrabbers();
	void CloseGrabbers();

	void WheelsForward();
	void WheelsReverse();
	void WheelsStop();
};

#endif  // Grompers_H
