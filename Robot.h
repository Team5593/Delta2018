#pragma once

#include <TimedRobot.h>
#include <SmartDashboard/SendableChooser.h>

#include <Subsystems/DriveTrain.h>
#include <Subsystems/Shooter.h>
#include <Subsystems/Grompers.h>
#include <Subsystems/Feeder.h>

#include <OI.h>

class Robot : public frc::TimedRobot {
public:
	// Subsystems
	static DriveTrain drivetrain;
	static Shooter shooter;
	static Grompers grompers;
	static Feeder feeder;
	// Operator Interface
	static OI oi;

	// Pre Game
	enum Plate { SwitchClose, ScaleMiddle, SwitchFar };
	enum Position { Left = 'L', Middle = 'M', Right = 'R' };
	Position* GetGameData();
	frc::SendableChooser<Position> *position_selector;

private:
	// Robot States
	void RobotInit() override;
	void RobotPeriodic() override;
	void DisabledInit() override;
	void DisabledPeriodic() override;
	void AutonomousInit() override;
	void AutonomousPeriodic() override;
	void TeleopInit() override;
	void TeleopPeriodic() override;
	void TestInit() override;
	void TestPeriodic() override;
};
