#include "Points.h"

// Constructor definition (only in the .cpp file)
Points::Points() : points(0) {}

// Method to print the current points
void Points::getPoints() const {
    std::cout << points;  // Directly print the points to the console
}

// Method to add points
void Points::addPoints(int add) {
    points += add;
}

// Method to remove points
void Points::removePoints(int remove) {
    points -= remove;
}

// Method to get points value as an integer
int Points::getPointsValue() const {
    return points;
}
