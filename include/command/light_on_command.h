#ifndef LIGHT_ON_COMMAND_H
#define LIGHT_ON_COMMAND_H

#include "command.h"

class Light;

class LightOnCommand: public Command {
public:
  // Client takes responsbility to deallocate Light instance
  LightOnCommand(Light *light);

public:
  void execute();

private:
  Light *light_;
};

#endif  // LIGHT_ON_COMMAND_H
