#include "GroundStation.h"
#include <iostream>
#include <cmath>

GroundStation::GroundStation(int id, double latitude, double longitude)
    : id(id), latitude(latitude), longitude(longitude) {}

int GroundStation::getId() const {
    return id;
}
double GroundStation::getLatitude() const {
    return latitude;
}
double GroundStation::getLongitude() const {
    return longitude;
}
void GroundStation::receiveData(int satelliteId) {
    // For simplicity, just print that the ground station is receiving data
    std::cout << "Ground Station " << id << " receiving data from Satellite " << satelliteId << std::endl;
}
void GroundStation::processData() {
    // For simplicity, just print that the ground station is processing data
    std::cout << "Ground Station " << id << " processing data..." << std::endl;
}
