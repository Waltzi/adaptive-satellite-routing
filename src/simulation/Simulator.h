#ifndef SIMULATOR_H
#define SIMULATOR_H

#include "Satellite.h"
#include "GroundStation.h"
#include <vector>



class Simulator {
public:
    Simulator();  // Constructor
    void run(double simulationTime);  // Function to run the simulation

private:
    std::vector<Satellite> satellites;  // List of satellites
    std::vector<GroundStation> groundStations;  // List of ground stations
    void initialize();  // Function to initialize satellites
};

#endif // SIMULATOR_H
// This header file defines the Simulator class, which contains a method to run the simulation. 