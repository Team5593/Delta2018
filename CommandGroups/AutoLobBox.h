#ifndef AutoLobBox_H
#define AutoLobBox_H

#include <Commands/CommandGroup.h>
#include <Robot.h>

class Robot;

class AutoLobBox : public frc::CommandGroup {
public:
	AutoLobBox(char pos);
};

#endif  // AutoLobBox_H
