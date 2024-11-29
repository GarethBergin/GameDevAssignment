#include "Sea.h"
#include <iostream>

void Sea::interact(Player& player, Points& points) {
    std::cout << "You are at: Sea\n";
    std::cout << "A faint image of a girl trapped on a boat drifting away at sea catches your eye.\n";
    std::cout << "What will you do?\n";
    std::cout << "1. Equip the lifejacket and dive into the sea.\n";
    std::cout << "2. Hop into the ocean and swim for your life.\n";
    std::cout << "3. Turn around and go home.\n";

    int choice;
    std::cin >> choice;

    if (choice == 1) {
        if (std::find(player.getInventory().begin(), player.getInventory().end(), "Old Lifejacket") != player.getInventory().end()) {
            std::cout << "After putting on the lifejacket, you confidently dive into the deep sea and make your way to the boat and find your sister. You swim back home to safety.\n";
            points.addPoints(5); // Reward for saving the sister
            std::cout << "+5 Points\n";
            std::cout << "---Current points: ";
            points.getPoints();
            std::cout << "---\n";
            std::cout << "---GAME OVER--- Ending: Happy Ending\n";
        }
        else {
            std::cout << "You don't have a lifejacket and cannot safely dive into the sea.\n";
            std::cout << "---GAME OVER--- Ending: Lack of Preparation\n";
        }
    }
    else if (choice == 2) {
        std::cout << "You valiantly enter the water and swim with all your strength.\n";
        std::cout << "However, swimming was never your strong suit, and you immediately begin to sink.\n";
        std::cout << "---GAME OVER--- Ending: Deep Blue Depths\n";
    }
    else if (choice == 3) {
        std::cout << "Rather than risking everything for a sister that never showed much appreciation for your homemade meals, you turn around and walk home.\n";
        std::cout << "---GAME OVER--- Ending: Butterfly Effects\n";
    }
    else {
        std::cout << "Invalid choice. Game Over.\n";
    }
}
