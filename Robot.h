#include <Commands/Command.h>
#include <Commands/Scheduler.h>
#include <LiveWindow/LiveWindow.h>
#include <SmartDashboard/SendableChooser.h>
#include <SmartDashboard/SmartDashboard.h>
#include <CameraServer.h>
#include <TimedRobot.h>

#include "OI.h"
#include "Subsystems/DriveTrain.h"
#include "Commands/ControllerDrive.h"

class Robot : public frc::TimedRobot {
public:
	// Subsystems
	static DriveTrain drivetrain;
	// Commands
	static ControllerDrive controllerDrive;
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
};
