#pragma once
#include <string>
#include <iostream>

class Level {
protected:
    std::string description;  // The description of the level
    int points;               // Points for the level

public:
    // Constructor declaration
    Level(std::string desc, int pts);

    // Virtual methods to be overridden in derived classes
    virtual void startLevel() = 0;   // Pure virtual, forces derived classes to implement it
    virtual void presentChoices() = 0; // Same here
    virtual void handleChoice(int choice) = 0; // Same here

    void displayLevel();
    int getPoints();
};
