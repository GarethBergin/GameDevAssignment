#include "Forest.h"
#include <iostream>

void Forest::startFirstChoice(Player& player, Points& points) {
    std::cout << "You awaken to see your home in a total mess. Your sister is missing.\n";
    std::cout << "Will you go look for her?\n";
    std::cout << "1. Of Course!\n";
    std::cout << "2. She’ll find her own way back.\n";

    int choice;
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "\nYou venture out in search of your sister!\n";
        points.addPoints(3);
        std::cout << "+3 Points\n";
        std::cout << "---Current Points: " << points.getPointsValue() << "---\n";
    }
    else if (choice == 2) {
        std::cout << "\nYou go back to sleep and ignore all the larger issues around you.\n";
        std::cout << "\n---GAME OVER---\n";
        std::cout << "Ending: Family Feud\n";
        return;
    }
}

void Forest::startLevel(Player& player, Points& points) {
    std::cout << "Where do you wish to search?\n";
    std::cout << "1. The nearest town.\n";
    std::cout << "2. Follow the river.\n";
    std::cout << "3. The Forest.\n";

    int choice;
    std::cin >> choice;

    if (choice == 1) {
        // Local town interaction and gift acquisition
        std::cout << "You make your way to the nearby village and ask a local villager about your sister.\n";
        std::cout << "He informs you that a young blonde girl had wandered through the village not long ago.\n";
        std::cout << "The villager gives you a gift to aid you in your journey and wishes you good luck.\n";
        points.addPoints(3);
        player.addItem("Lighter");
        std::cout << "+3 Points\n";
        std::cout << "+Lighter\n";
    }
    else if (choice == 2) {
        std::cout << "The river offers no immediate clues, but you continue following it in hopes of finding your sister.\n";
        points.addPoints(0);
        std::cout << "+0 Points\n";
    }
    else if (choice == 3) {
        std::cout << "You wander through the forest, but after a while, you find yourself completely lost.\n";
        std::cout << "It feels like you’ve walked into every tree and stumbled over every branch.\n";
        points.removePoints(2);
        std::cout << "-2 Points\n";
    }

    std::cout << "---Current Points: " << points.getPointsValue() << "---\n";
}

