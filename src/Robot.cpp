/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include <Commands/Command.h>
#include <Commands/Scheduler.h>
#include <LiveWindow/LiveWindow.h>
#include <SmartDashboard/SendableChooser.h>
#include <SmartDashboard/SmartDashboard.h>
#include <TimedRobot.h>

#include "Commands/ExampleCommand.h"
#include "Commands/MyAutoCommand.h"

class Robot : public frc::TimedRobot {
public:
	void RobotInit() override {
	}

	void DisabledInit() override {}

	void DisabledPeriodic() override {
	}

	void AutonomousInit() override {
	}

	void AutonomousPeriodic() override {
	}

	void TeleopInit() override {
	}

	void TeleopPeriodic() override {}

	void TestPeriodic() override {}

private:
};

START_ROBOT_CLASS(Robot)
