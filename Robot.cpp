/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Robot.h"

// Subsystems
DriveTrain Robot::drivetrain;
// Operator Interface
OI Robot::oi;


// Robot
void Robot::RobotInit() {
	CameraServer::GetInstance()->StartAutomaticCapture("Front Camera" , 0);
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
	frc::Scheduler::GetInstance()->AddCommand(new AutoTest);
}

void Robot::AutonomousPeriodic() {
	frc::Scheduler::GetInstance()->Run();
}

// Teleop
void Robot::TeleopInit() {

}

void Robot::TeleopPeriodic() {
	frc::Scheduler::GetInstance()->Run();
}

// Test
void Robot::TestInit() {

}

void Robot::TestPeriodic() {

}

START_ROBOT_CLASS(Robot)
