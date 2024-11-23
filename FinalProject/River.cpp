#include "River.h"
#include <iostream>

void River::startFirstChoice(Player& player, Points& points) {
    std::cout << "You are at the river, looking for your sister.\n";
    std::cout << "What will you do?\n";
    std::cout << "1. Cross the river.\n";
    std::cout << "2. Stay on the bank.\n";

    int choice;
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "\nYou decide to cross the river.\n";
        points.addPoints(2);
        std::cout << "+2 Points\n";
    }
    else if (choice == 2) {
        std::cout << "\nYou stay on the bank, waiting for the right moment.\n";
        points.addPoints(0);
        std::cout << "+0 Points\n";
    }

    std::cout << "---Current Points: " << points.getPointsValue() << "---\n";
}

void River::startLevel(Player& player, Points& points) {
    std::cout << "You find a fork in the path. Where do you want to go?\n";
    std::cout << "1. The nearest town.\n";
    std::cout << "2. Follow the river further.\n";
    std::cout << "3. Explore the forest.\n";

    int choice;
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "You decide to head toward the nearest town.\n";
        points.addPoints(3);
        player.addItem("Map");
        std::cout << "+3 Points and +Map\n";
    }
    else if (choice == 2) {
        std::cout << "You decide to continue following the river.\n";
        points.addPoints(0);
        std::cout << "+0 Points\n";
    }
    else if (choice == 3) {
        std::cout << "You venture into the forest.\n";
        points.removePoints(2);
        std::cout << "-2 Points\n";
    }

    std::cout << "---Current Points: " << points.getPointsValue() << "---\n";
}
