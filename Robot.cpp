/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Robot.h"

// Subsystems
DriveTrain Robot::drivetrain;
Shooter Robot::shooter;
Grompers Robot::grompers;
// Operator Interface
OI Robot::oi;

// Robot
void Robot::RobotInit() {
	CameraServer::GetInstance()->StartAutomaticCapture("Front Camera" , 0);
	drivetrain.GetGyro().Calibrate();
	drivetrain.GetGyro().Reset();
}

void Robot::RobotPeriodic() {

}

// Disabled
void Robot::DisabledInit() {

}

void Robot::DisabledPeriodic() {

}

// Autonomous
void Robot::AutonomousInit() {
	PlateSide* sides = GetGameData();

	if (sides[Plate::SwitchClose] == PlateSide::Left) {
		frc::Scheduler::GetInstance()->AddCommand(new AutoTest);
	}
	else { // Right
		frc::Scheduler::GetInstance()->AddCommand(new AutoTest);
	}
}

void Robot::AutonomousPeriodic() {
	frc::Scheduler::GetInstance()->Run();
}

// Teleop
void Robot::TeleopInit() {
	frc::Scheduler::GetInstance()->RemoveAll();
}

void Robot::TeleopPeriodic() {
	frc::Scheduler::GetInstance()->Run();
}

// Test
void Robot::TestInit() {

}

void Robot::TestPeriodic() {
}

// Game Data
Robot::PlateSide* Robot::GetGameData() {
	static PlateSide sides[3];

	std::string gameData = frc::DriverStation::GetInstance().GetGameSpecificMessage();

	for (int i = 0; i < 3; i++) {
		sides[i] = PlateSide(gameData[i]);
	}

	return sides;
}

START_ROBOT_CLASS(Robot)
