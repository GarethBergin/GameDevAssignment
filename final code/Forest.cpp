#include "Forest.h"
#include <iostream>

void Forest::interact(Player& player, Points& points) {
    std::cout << "You are in the forest. It's dark, and you're lost.\n";
    points.removePoints(2);
    std::cout << "-2 points for getting lost.\n";
}
