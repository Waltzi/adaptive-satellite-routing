#include "Satellite.h"
#include <iostream>
#include <cmath>
#include <vector>

#include "Satellite.h"
#include <iostream>

Satellite::Satellite(int id, double altitude, double position)
    : id(id), altitude(altitude), position(position) {}
int Satellite::getId() const {
    return id;
}
double Satellite::getAltitude() const {
    return altitude;
}
double Satellite::getPosition() const {
    return position;
}

void Satellite::updatePosition(double time) {
    // Simple update for simulation (just an example)
    position += time * 0.1;  // For simplicity, move it by some factor of time
    std::cout << "Satellite " << id << " updated position: " << position << std::endl;
}

void Satellite::transmitData(int groundStationId) {
    // For simplicity, just print that the satellite is transmitting data
    std::cout << "Satellite " << id << " transmitting data to Ground Station " << groundStationId << std::endl;
}