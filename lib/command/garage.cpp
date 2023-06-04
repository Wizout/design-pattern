#include "command/garage.h"
#include <iostream>

void Garage::up() { std::cout << "Garage Door is Open" << std::endl; }

void Garage::down() { std::cout << "Garage Door is Down" << std::endl; }

void Garage::stop() { std::cout << "Garage Door is Stop" << std::endl; }

void Garage::light_on() { std::cout << "Garage Door is Light On" << std::endl; }

void Garage::light_off() {
  std::cout << "Garage Door is Light Off" << std::endl;
}
