#pragma once

#include <Commands/Command.h>
#include <Commands/Scheduler.h>
#include <LiveWindow/LiveWindow.h>
#include <SmartDashboard/SendableChooser.h>
#include <SmartDashboard/SmartDashboard.h>
#include <CameraServer.h>
#include <TimedRobot.h>
#include <iostream>
#include <Timer.h>
#include <DriverStation.h>
#include <BuiltInAccelerometer.h>

#include "OI.h"
#include "Subsystems/DriveTrain.h"
#include "Subsystems/Shooter.h"
#include "Subsystems/Grompers.h"
#include "CommandGroups/AutoTest.h"
#include "CommandGroups/LoadBox.h"
#include "CommandGroups/ShootBox.h"
#include "Commands/MoveTimed.h"
#include "Commands/RotateTimed.h"
#include "Commands/MoveDistance.h"
#include "Commands/RotateAngle.h"
#include "Commands/GrabClose.h"
#include "Commands/GrabOpen.h"
#include "Commands/PivotUp.h"
#include "Commands/PivotDown.h"
#include "Commands/FeedBox.h"

class Robot : public frc::TimedRobot {
public:
	// Subsystems
	static DriveTrain drivetrain;
	static Shooter shooter;
	static Grompers grompers;
	// Operator Interface
	static OI oi;

private:
	// Robot
	void RobotInit() override;
	void RobotPeriodic() override;
	// Disabled
	void DisabledInit() override;
	void DisabledPeriodic() override;
	// Autonomous
	void AutonomousInit() override;
	void AutonomousPeriodic() override;
	// Teleop
	void TeleopInit() override;
	void TeleopPeriodic() override;
	// Test
	void TestInit() override;
	void TestPeriodic() override;
	// Game Data
	enum Plate { SwitchClose, ScaleMiddle, SwitchFar };
	enum PlateSide { Left = 'L', Right = 'R' };
	PlateSide* GetGameData();

	BuiltInAccelerometer accel;
};
