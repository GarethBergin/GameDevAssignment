#include "HouseLevel.h"
#include <iostream>

void HouseLevel::startLevel() {
    std::cout << "You awaken to see your home in a total mess. Your sister is missing.\n";
    presentChoices();
    int choice;
    std::cin >> choice;
    handleChoice(choice);
}

void HouseLevel::presentChoices() {
    std::cout << "**Will you go look for her?**\n";
    std::cout << "1. Of course!\n";
    std::cout << "2. She’ll find her own way back.\n";
}

void HouseLevel::handleChoice(int choice) {
    switch (choice) {
    case 1:
        std::cout << "You venture out in a search to find your sister!\n";
        // Add points or proceed to next level logic
        break;
    case 2:
        std::cout << "You go back to sleep and ignore the larger issues around you.\n";
        std::cout << "---GAME OVER---\n";
        break;
    default:
        std::cout << "Invalid choice. Try again.\n";
        break;
    }
}
