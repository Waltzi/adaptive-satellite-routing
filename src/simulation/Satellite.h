# ifndef SATELLITE_H
# define SATELLITE_H
class Satellite {
public:
    Satellite(int id, double altitude, double position);  // Constructor
    void updatePosition(double time);  // Function to update the satellite's position
    void transmitData(int groundStationId);  // Function to transmit data to a ground station
    // Future: Add more functions for routing, data handling, etc.
    // Future: Add more attributes for satellite status, health, etc.
    int getId() const;  // Getter for satellite ID
    double getAltitude() const;  // Getter for altitude
    double getPosition() const;  // Getter for position
private:
    int id;  // Satellite ID
    double altitude;  // Altitude of the satellite
    double position;  // Position of the satellite in orbit
    // Future: Add more attributes for satellite status, health, etc.
};

# endif // SATELLITE_H
    