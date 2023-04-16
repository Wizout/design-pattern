#ifndef SIMPLE_REMOTE_CONTROL_H
#define SIMPLE_REMOTE_CONTROL_H

#include "command.h"

class SimpleRemoteControl {
public:
  SimpleRemoteControl();

  ~SimpleRemoteControl() = default;

public:
  void set_command(Command *slot);

public:
  void button_was_pressed();

private:
  Command *slot_;
};

#endif // SIMPLE_REMOTE_CONTROL_H
