#include "ForestLevel.h"
#include <iostream>

void ForestLevel::startLevel() {
    std::cout << "You are in the forest. You've been walking for a while, but you're lost.\n";
    presentChoices();
}

void ForestLevel::presentChoices() {
    std::cout << "Where do you want to go?\n";
    std::cout << "1. Keep walking straight ahead.\n";
    std::cout << "2. Look for a trail.\n";
    std::cout << "3. Climb a tree to get a better view.\n";
}

void ForestLevel::handleChoice(int choice) {
    switch (choice) {
    case 1:
        std::cout << "You keep walking but feel like you're getting nowhere.\n";
        break;
    case 2:
        std::cout << "You find a trail and follow it. You feel more hopeful.\n";
        break;
    case 3:
        std::cout << "You climb a tree and spot a village in the distance. You head towards it.\n";
        break;
    default:
        std::cout << "Invalid choice. Try again.\n";
        break;
    }
}
