#include "CaveLevel.h"
#include <iostream>

void CaveLevel::startLevel() {
    std::cout << "After stumbling around for hours, you find yourself entering a cave with an eerie vibe.\n";
    presentChoices();
    int choice;
    std::cin >> choice;
    handleChoice(choice);
}

void CaveLevel::presentChoices() {
    std::cout << "What will you do?\n";
    std::cout << "1. Hightail it out of the cave!\n";
    std::cout << "2. Throw the lighter towards it!\n";
    std::cout << "3. Fight it with nothing but your brawns and wits!\n";
}

void CaveLevel::handleChoice(int choice) {
    switch (choice) {
    case 1:
        std::cout << "You run away, narrowly escaping the danger.\n";
        break;
    case 2:
        std::cout << "You throw the lighter towards the monster, and it ignites in flames!\n";
        break;
    case 3:
        std::cout << "You try to fight, but the monster overwhelms you.\n";
        std::cout << "---GAME OVER---\n";
        break;
    default:
        std::cout << "Invalid choice. Try again.\n";
        break;
    }
}
