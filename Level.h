// Level.h
#ifndef LEVEL_H
#define LEVEL_H

#include <iostream>
#include <string>

class Level {
protected:
    std::string description;
    int points;

public:
    Level(std::string desc, int pts);
    virtual void playLevel() = 0; // Abstract method
    void displayLevel();
    int getPoints();
};

#endif
