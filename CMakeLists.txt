cmake_minimum_required(VERSION 3.10)
project(AdaptiveSatelliteRouting)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-O2 -Wall")

# Include directories
include_directories(src)
include_directories(src/simulation)

# Add executable with all relevant source files
add_executable(simulator 
    src/main.cpp 
    src/simulation/Simulator.cpp 
    src/simulation/Satellite.cpp 
    src/simulation/GroundStation.cpp
)

# Link any required libraries (if needed)
