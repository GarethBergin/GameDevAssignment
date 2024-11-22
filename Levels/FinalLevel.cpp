#include "FinalLevel.h"
#include <iostream>

void FinalLevel::startLevel() {
    std::cout << "You reach the final level, but the mystery is still unsolved. Your sister is nowhere in sight.\n";
    presentChoices();
}

void FinalLevel::presentChoices() {
    std::cout << "What will you do?\n";
    std::cout << "1. Keep looking for clues.\n";
    std::cout << "2. Give up and return home.\n";
    std::cout << "3. Call for help.\n";
}

void FinalLevel::handleChoice(int choice) {
    switch (choice) {
    case 1:
        std::cout << "You find a hidden message from your sister! She’s in the cave!\n";
        break;
    case 2:
        std::cout << "You return home. But the feeling of giving up haunts you.\n";
        std::cout << "---GAME OVER---\n";
        break;
    case 3:
        std::cout << "You call for help and someone arrives to guide you.\n";
        break;
    default:
        std::cout << "Invalid choice. Try again.\n";
        break;
    }
}
