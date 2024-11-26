#include "River.h"
#include <iostream>

void River::interact(Player& player, Points& points) {
    std::cout << "You are at the river. The area seems calm, but there are no leads.\n";
    points.addPoints(0);
    std::cout << "You gained 0 points.\n";
}
