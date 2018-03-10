#include "Robot.h"

#include <Commands/Scheduler.h>
#include <CameraServer.h>
#include <GyroBase.h>
#include <DriverStation.h>

#include <CommandGroups/AutoBasic.h>
#include <CommandGroups/AutoLobBox.h>
#include <CommandGroups/AutoTest.h>
#include <CommandGroups/AutoMiddle.h>

#include <OI.h> // this is just here to fix eclipse semantic errors...

DriveTrain Robot::drivetrain;
Shooter Robot::shooter;
Grompers Robot::grompers;
Feeder Robot::feeder;
OI Robot::oi;

// Robot States
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

	if (robot_position == Position::Middle) {
		// Go around the switch to the right.
		autoCommand = new AutoMiddle;
	}
	else if (switch_side == robot_position) {
		// Put powercube in the switch
		autoCommand = new AutoLobBox(robot_position);
	}
	else { // switch_side != robot_position
		// Robot is on the wrong side, just cross the base line.
		autoCommand = new AutoBasic;
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

void Robot::TestInit() {}
void Robot::TestPeriodic() {}
void Robot::DisabledInit() {}
void Robot::DisabledPeriodic() {}

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
