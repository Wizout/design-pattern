#include "command/garage_on_command.h"
#include "command/garage.h"
#include <cassert>

void GarageOnCommand::execute() {
  assert(garage_);
  garage_->up();
}
