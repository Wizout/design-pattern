#include "command/garage.h"
#include "command/garage_on_command.h"
#include "command/light.h"
#include "command/light_on_command.h"
#include "command/simple_remote_control.h"
#include <iostream>
#include <memory>

int main(int, char **) {
  // A simple remote control to control a light on
  std::unique_ptr<SimpleRemoteControl> remote_ctrl =
      std::make_unique<SimpleRemoteControl>();

  // Light to be controlled and its command object
  std::unique_ptr<Light> light = std::make_unique<Light>();
  std::unique_ptr<LightOnCommand> light_cmd =
      std::make_unique<LightOnCommand>(light.get());

  std::unique_ptr<Garage> garage = std::make_unique<Garage>();
  std::unique_ptr<GarageOnCommand> garage_cmd =
      std::make_unique<GarageOnCommand>(garage.get());

  remote_ctrl->set_command(light_cmd.get());
  remote_ctrl->button_was_pressed();

  remote_ctrl->set_command(garage_cmd.get());
  remote_ctrl->button_was_pressed();

  return 0;
}
