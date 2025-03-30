# ifndef GROUNDSTATION_H
# define GROUNDSTATION_H

class GroundStation {
public:
    GroundStation(int id, double latitude, double longitude);  // Constructor
    void receiveData(int satelliteId);  // Function to receive data from a satellite
    void processData();  // Function to process received data
    // Future: Add more functions for data storage, analysis, etc.
    // Future: Add more attributes for ground station status, health, etc.
    int getId() const;
    double getLatitude() const;  // Getter for latitude
    double getLongitude() const;  // Getter for longitude
private:
    int id;  // Ground Station ID
    double latitude;  // Latitude of the ground station
    double longitude;  // Longitude of the ground station
    // Future: Add more attributes for ground station status, health, etc.
};
# endif // GROUNDSTATION_H
// This header file defines the GroundStation class, which contains methods for receiving and processing data from satellites.