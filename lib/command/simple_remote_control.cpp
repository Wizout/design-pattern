#include "command/simple_remote_control.h"
#include <cassert>

SimpleRemoteControl::SimpleRemoteControl() : slot_{nullptr} {}

void SimpleRemoteControl::set_command(Command *slot) {
  assert(slot);
  slot_ = slot;
}

void SimpleRemoteControl::button_was_pressed() {
  assert(slot_);
  slot_->execute();
}
