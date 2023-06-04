#include "command/light_on_command.h"
#include "command/light.h"
#include <cassert>

LightOnCommand::LightOnCommand(Light *light) : light_{light} {}

void LightOnCommand::execute() {
  assert(light_);
  light_->on();
}
