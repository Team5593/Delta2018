#pragma once

#include <Commands/Command.h>
#include <Commands/Scheduler.h>
#include <LiveWindow/LiveWindow.h>
#include <SmartDashboard/SendableChooser.h>
#include <SmartDashboard/SmartDashboard.h>
#include <CameraServer.h>
#include <CommandGroups/AutoLobBox.h>
#include <CommandGroups/ShootBoxLow.h>
#include <TimedRobot.h>
#include <iostream>
#include <DriverStation.h>
#include <GyroBase.h>

#include "OI.h"

// Subsystems
#include "Subsystems/DriveTrain.h"
#include "Subsystems/Shooter.h"
#include "Subsystems/Grompers.h"
#include "Subsystems/Feeder.h"

#include "Commands/MoveTimed.h"
#include "Commands/MoveDistance.h"
#include "Commands/RotateAngle.h"
#include "Commands/GrabOpen.h"
#include "Commands/PivotUp.h"
#include "Commands/PivotDown.h"
#include "Commands/FeedBox.h"
#include "Commands/SpinFlyWheels.h"
#include "Commands/SpitOutBox.h"
// Autonomous
#include "CommandGroups/BasicAuto.h"
#include "CommandGroups/AutoLobBox.h"
#include "CommandGroups/AutoTest.h"

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
	Position robot_position;

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
