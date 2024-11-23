#include "Cave.h"
#include <iostream>

void Cave::startFirstChoice(Player& player, Points& points) {
    std::cout << "After stumbling around for what feels like hours, you find yourself entering a cave with an eerie vibe to it.\n";

    // Check if the player has the Lighter
    if (std::find(player.getInventory().begin(), player.getInventory().end(), "Lighter") != player.getInventory().end()) {
        std::cout << "Thanks to the villager’s gift, you don’t have to wander around in the dark!\n";
        points.addPoints(1);
        std::cout << "+1 Point\n";
    }
    else {
        std::cout << "It's dark here, and you struggle to see anything.\n";
    }

    std::cout << "---Current Points: " << points.getPointsValue() << "---\n";
}

void Cave::startLevel(Player& player, Points& points) {
    std::cout << "After wandering for a few more minutes, you hear the sifting of what sound like leaves.\n";
    std::cout << "Suddenly you find yourself face-to-face with a monster that looks akin to a piranha plant!\n";
    std::cout << "What will you do?\n";
    std::cout << "1. Hightail it out of the cave!\n";
    std::cout << "2. Throw the lighter towards it!\n";
    std::cout << "3. Fight it with nothing but your brawns and wits!\n";

    int choice;
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "You scarcely manage to dodge as the monster lunges its mouth at you and rush as quickly as you can to the light at the end of the cave.\n";
        points.addPoints(3);
        std::cout << "+3 Points\n";
    }
    else if (choice == 2) {
        std::cout << "You hurl the lighter towards the monster and watch as it ignites in flames!\n";
        std::cout << "As it dramatically falls to the ground, you manage to catch a glimpse of what it was guarding.\n";
        points.addPoints(6);
        player.addItem("Old Lifejacket");
        std::cout << "+6 Points\n";
        std::cout << "+Old Lifejacket\n";
    }
    else if (choice == 3) {
        std::cout << "Although you manage to get a few solid hits into the monster, it charges its big, gaping mouth towards you, and you fail to react in time.\n";
        std::cout << "\n---GAME OVER---\n";
        std::cout << "Ending: A Balanced Breakfast\n";
        return;
    }

    std::cout << "---Current Points: " << points.getPointsValue() << "---\n";
}
