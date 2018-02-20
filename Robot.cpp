#include "Robot.h"

// Static Members
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

	if (switch_side == Position::Left) { // Left
		switch (robot_position) {
			case Position::Left: 	autoCommand = new AutoLobBox(Position::Right); break;
			case Position::Middle: 	/*autoCommand = new BasicAuto;*/ break;
			case Position::Right: 	autoCommand = new BasicAuto; break;
		}
	}
	else { // Right
		switch (robot_position) {
			case Position::Left: 	autoCommand = new BasicAuto; break;
			case Position::Middle: 	/*autoCommand = new BasicAuto;*/ break;
			case Position::Right: 	autoCommand = new AutoLobBox(Position::Left); break;
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
