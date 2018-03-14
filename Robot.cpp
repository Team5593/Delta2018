#include "Robot.h"

#include <Commands/Scheduler.h>
#include <CameraServer.h>
#include <GyroBase.h>
#include <DriverStation.h>

#include <CommandGroups/AutoBasic.h>
#include <CommandGroups/AutoLobBox.h>
#include <CommandGroups/AutoTest.h>
#include <CommandGroups/AutoMiddle.h>
#include <Commands/MoveDistance.h>

#include <OI.h> // this is just here to fix eclipse semantic errors...

DriveTrain Robot::drivetrain;
Shooter Robot::shooter;
Grompers Robot::grompers;
Feeder Robot::feeder;
OI Robot::oi;

void Robot::RobotInit() {
	CameraServer::GetInstance()->StartAutomaticCapture("Front Camera" , 0);
	drivetrain.GetGyro().Calibrate();
}

void Robot::RobotPeriodic() {

}

void Robot::AutonomousInit() {
	Command* auto_command;
	Position* sides = GetGameData();
	Position switch_side = sides[Plate::SwitchClose];
	robot_position = Position::Left;

	if (robot_position == Position::Middle) {
		// Go around the switch to the right.
		auto_command = new AutoMiddle(switch_side);
	}
	else if (switch_side == robot_position) {
		// Put powercube in the switch
		auto_command = new AutoLobBox(robot_position);
	}
	else { // switch_side != robot_position
		// Robot is on the wrong side, just cross the base line.
		auto_command = new AutoBasic;
	}
	
	//auto_command = new MoveDistance(100, 0.6);

	frc::Scheduler::GetInstance()->AddCommand(auto_command);
}

void Robot::AutonomousPeriodic() {
	frc::Scheduler::GetInstance()->Run();
}

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

Robot::Position* Robot::GetGameData() {
	static Position sides[3];

	std::string gameData = frc::DriverStation::GetInstance().GetGameSpecificMessage();

	for (int i = 0; i < 3; i++) {
		sides[i] = Position(gameData[i]);
	}

	return sides;
}

START_ROBOT_CLASS(Robot)
