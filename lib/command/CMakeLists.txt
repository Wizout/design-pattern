include_directories(${PROJECT_SOURCE_DIR}/include)

add_library(
  command
  garage_on_command.cpp
  garage.cpp
  light_on_command.cpp
  light.cpp
  simple_remote_control.cpp
)
