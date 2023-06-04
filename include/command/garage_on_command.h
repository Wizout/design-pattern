#ifndef COMMAND_GARAGE_ON_COMMAND_H
#define COMMAND_GARAGE_ON_COMMAND_H

#include "command/command.h"

class Garage;

class GarageOnCommand : public Command {
public:
  GarageOnCommand(Garage *garage) : garage_(garage) {}

  void execute();

private:
  Garage *garage_;
};

#endif // COMMAND_GARAGE_ON_COMMAND_H
