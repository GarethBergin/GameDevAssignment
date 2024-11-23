#pragma once
#include <iostream>

class Points {
private:
    int points; // This is the member variable storing the points

public:
    // Constructor declaration (no definition here)
    Points();

    // Method to get the current points (used for printing the points)
    void getPoints() const;

    // Method to add points
    void addPoints(int add);

    // Method to remove points
    void removePoints(int remove);

    // Method to get points value as an integer (used when displaying points elsewhere)
    int getPointsValue() const;
};
