#include "Points.h"

// Constructor initializes points to 0
Points::Points() : points(0) {}

// Display current points
void Points::getPoints() const {
    std::cout << "Current points: " << points << std::endl;
}

// Add points
void Points::addPoints(int add) {
    points += add;
}

// Remove points
void Points::removePoints(int remove) {
    points -= remove;
}

// Display final points
void Points::finalPoints() const {
    std::cout << "Final points: " << points << std::endl;
}

// Return points as an integer
int Points::getPointsValue() const {
    return points;
}
