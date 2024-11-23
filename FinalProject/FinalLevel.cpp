#include "FinalLevel.h"
#include <iostream>

void FinalLevel::startFirstChoice(Player& player, Points& points) {
    std::cout << "After exiting the cave, something immediately catches your eye.\n";
    std::cout << "A faint image of a girl trapped on a boat drifting away at sea.\n";
    std::cout << "With all the force you can muster, you sprint towards the sea.\n";
}

void FinalLevel::startLevel(Player& player, Points& points) {
    std::cout << "What will you do?\n";
    std::cout << "1. Equip the lifejacket and dive into the sea.\n";
    std::cout << "2. Hop into the ocean and swim for your life.\n";
    std::cout << "3. Turn around and go home.\n";

    int choice;
    std::cin >> choice;

    if (choice == 1) {
        if (std::find(player.getInventory().begin(), player.getInventory().end(), "Old Lifejacket") != player.getInventory().end()) {
            std::cout << "After putting on the lifejacket, you confidently dive into the deep sea and make your way to the boat.\n";
            std::cout << "You make it to your sister, carry her back to shore, and return home after a long day.\n";
            std::cout << "\n---GAME OVER---\n";
            std::cout << "Happy Ending\n";
        }
        else {
            std::cout << "You don't have the lifejacket and fail to save your sister.\n";
            std::cout << "\n---GAME OVER---\n";
            std::cout << "Ending: Deep Blue Depths\n";
        }
    }
    else if (choice == 2) {
        std::cout << "You valiantly enter the water and swim with all your strength.\n";
        std::cout << "However, swimming was never your strong suit, and you immediately begin to sink and are unable to stay above water.\n";
        std::cout << "\n---GAME OVER---\n";
        std::cout << "Ending: Deep Blue Depths\n";
    }
    else if (choice == 3) {
        std::cout << "Rather than risking everything for a sister that never showed much appreciation for your homemade meals, you turn around and walk home.\n";
        std::cout << "\n---GAME OVER---\n";
        std::cout << "Ending: Butterfly Effects\n";
    }
}
