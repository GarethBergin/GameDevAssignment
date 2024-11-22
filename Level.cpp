// Level.cpp
#include "Level.h"

Level::Level(std::string desc, int pts) : description(desc), points(pts) {}

void Level::displayLevel() {
    std::cout << description << std::endl;
}

int Level::getPoints() {
    return points;
}