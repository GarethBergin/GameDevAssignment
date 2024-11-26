#include "Cave.h"
#include <iostream>
#include <algorithm> // For std::find

void Cave::interact(Player& player, Points& points) {
    displayLocation("Cave");
    std::cout << "You enter a dark and eerie cave.\n";

    // Check if the player has a lighter
    if (std::find(player.getInventory().begin(), player.getInventory().end(), "Lighter") != player.getInventory().end()) {
        std::cout << "Thanks to the Lighter, you navigate the cave safely.\n";
        points.addPoints(1);
        std::cout << "+1 Point\n";
    }
    else {
        std::cout << "Without a light source, you stumble in the dark and get injured.\n";
        points.removePoints(2);
        std::cout << "You lost 2 points.\n";
        return; // Exit the cave interaction if no lighter is present
    }

    std::cout << "After wandering for a few minutes, you hear a rustling sound. A monster that looks like a piranha plant appears!\n";
    std::cout << "What will you do?\n";
    std::cout << "1. Hightail it out of the cave.\n";
    std::cout << "2. Throw the lighter towards it.\n";
    std::cout << "3. Fight it with nothing but your brawns and wits!\n";

    int choice;
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "You narrowly escape the cave, but without confronting the monster.\n";
        points.addPoints(1); // Minor reward for escaping
        std::cout << "+1 Point\n";
    }
    else if (choice == 2) {
        std::cout << "You throw the lighter towards the monster, igniting it in flames!\n";
        std::cout << "As it falls, you find an old lifejacket nearby.\n";
        player.addItem("Old Lifejacket");
        points.addPoints(6); // Major reward for defeating the monster
        std::cout << "+6 Points and an Old Lifejacket\n";
    }
    else if (choice == 3) {
        std::cout << "You try to fight the monster with your bare hands, but it overpowers you.\n";
        points.removePoints(3); // Penalty for choosing to fight
        std::cout << "You lost 3 points.\n";
        std::cout << "---GAME OVER--- Ending: A Balanced Breakfast\n";
        return;
    }
    else {
        std::cout << "Invalid choice. You retreat from the cave empty-handed.\n";
    }
}
