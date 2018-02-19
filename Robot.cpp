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
Feeder Robot::feeder;
// Operator Interface
OI Robot::oi;

// Robot
void Robot::RobotInit() {
	CameraServer::GetInstance()->StartAutomaticCapture("Front Camera" , 0);
	drivetrain.GetGyro().Calibrate();
}

void Robot::RobotPeriodic() {

}

// Autonomous
void Robot::AutonomousInit() {
	Command* autoCommand;
	Position* sides = GetGameData();
	Position switch_side = sides[Plate::SwitchClose];
	robot_position = Position::Left;

	if (switch_side == Position::Left) { // Left
		switch (robot_position) {
			case Position::Left: 	autoCommand = new AutoLobBoxRight; break;
			case Position::Middle: 	/*autoCommand = new AutoLobBoxRight;*/ break;
			case Position::Right: 	autoCommand = new BasicAuto; break;
		}
	}
	else { // Right
		switch (robot_position) {
			case Position::Left: 	autoCommand = new BasicAuto; break;
			case Position::Middle: 	/*autoCommand = new AutoLobBoxRight;*/ break;
			case Position::Right: 	autoCommand = new AutoLobBoxRight; break;
		}
	}

	frc::Scheduler::GetInstance()->AddCommand(autoCommand);
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

// Disabled
void Robot::DisabledInit() {

}

void Robot::DisabledPeriodic() {

}

// Game Data
Robot::Position* Robot::GetGameData() {
	static Position sides[3];

	std::string gameData = frc::DriverStation::GetInstance().GetGameSpecificMessage();

	for (int i = 0; i < 3; i++) {
		sides[i] = Position(gameData[i]);
	}

	return sides;
}

START_ROBOT_CLASS(Robot)
