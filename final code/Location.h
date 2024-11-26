#pragma once
#include <string>
#include "Player.h"
#include "Points.h"

class Location {
protected:
    std::string name; // Name of the location

public:
    Location(const std::string& locationName) : name(locationName) {}
    virtual ~Location() = default;

    // Displays the current location
    virtual void displayLocation(const std::string& location) const; // Updated declaration

    // Virtual method to handle player interaction in the location
    virtual void interact(Player& player, Points& points) = 0;
};
