#include "Simulator.h"
#include "Satellite.h"
#include "GroundStation.h"
#include <iostream>
#include <cmath>
#include <vector>

Simulator::Simulator() {
    // Initialize satellites and ground stations
    initialize();
}

void Simulator::initialize(){
    satellites.push_back(Satellite(1, 500, 0));
    satellites.push_back(Satellite(2, 500, 1.0));
    groundStations.push_back(GroundStation(1, 37.7749, -122.4194));
}

void Simulator::run(double simulationTime) {
     double timeStep = 1.0;
     for (double t = 0; t < simulationTime; t += timeStep){
        std::cout << "Simulation time: " << t << std::endl;
        for (auto& satellite: satellites){
            satellite.updatePosition(timeStep);
            satellite.transmitData(groundStations[0].getId());

        }

     }

}