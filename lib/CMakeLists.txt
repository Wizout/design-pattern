add_executable(dp
  main.cpp
)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_subdirectory(command)

target_link_libraries(dp
  command
)
