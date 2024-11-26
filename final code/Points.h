#pragma once
#include <iostream>

class Points {
private:
    int points; // Stores the player's points

public:
    Points(); // Constructor

    // Core functionality for point management
    void getPoints() const;
    void addPoints(int add);
    void removePoints(int remove);

    // Display final points (the method used in GameManager)
    void finalPoints() const;

    // Return the current points value (if needed elsewhere)
    int getPointsValue() const;
};
