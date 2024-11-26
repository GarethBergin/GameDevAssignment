#include "Town.h"
#include <iostream>

void Town::interact(Player& player, Points& points) {
    std::cout << "You are at the town. A villager gives you a lighter and wishes you luck.\n";
    player.addItem("Lighter");
    points.addPoints(3);
    std::cout << "You gained 3 points and a Lighter!\n";
}
