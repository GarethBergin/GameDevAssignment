#include "RiverLevel.h"
#include <iostream>

void RiverLevel::startLevel() {
    std::cout << "You find yourself at the riverbank. It's calm, but you see no sign of your sister.\n";
    presentChoices();
}

void RiverLevel::presentChoices() {
    std::cout << "What do you want to do?\n";
    std::cout << "1. Follow the river downstream.\n";
    std::cout << "2. Look for a boat.\n";
    std::cout << "3. Cross the river.\n";
}

void RiverLevel::handleChoice(int choice) {
    switch (choice) {
    case 1:
        std::cout << "You follow the river and find a small village along the way.\n";
        break;
    case 2:
        std::cout << "You find a boat! It looks sturdy enough to cross the river.\n";
        break;
    case 3:
        std::cout << "You try to cross the river but the current is too strong, and you are swept away.\n";
        std::cout << "---GAME OVER---\n";
        break;
    default:
        std::cout << "Invalid choice. Try again.\n";
        break;
    }
}
