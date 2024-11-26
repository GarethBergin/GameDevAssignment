#include "GameManager.h"
#include "Town.h"
#include "River.h"
#include "Forest.h"
#include "Cave.h"
#include "Sea.h"
#include <iostream>
#include <conio.h> // For _getch()

// Constructor
GameManager::GameManager() : currentLocation("Home") {}

// Start the game
void GameManager::startGame() {
    std::cout << "You awaken to see your home in a total mess. Your sister is missing.\n";
    std::cout << "Will you go look for her?\n";
    std::cout << "1. Of course!\n";
    std::cout << "2. She'll find her own way back.\n";

    int choice;
    std::cin >> choice;

    if (choice == 2) {
        std::cout << "You go back to sleep and ignore all the larger issues around you.\n";
        std::cout << "---GAME OVER---\n";
        return;
    }

    std::cout << "You venture out in a search to find your sister!\n";
    points.addPoints(3);
    std::cout << "+3\n";
    std::cout << "---Current points: ";
    displayPoints();
    std::cout << "---\n";

    waitForSpace();

    setLocation("Starting Point");

    // Show the search question once
    std::cout << "Where do you wish to search?\n";
    std::cout << "1. The nearest town.\n";
    std::cout << "2. Follow the river.\n";
    std::cout << "3. The Forest.\n";
    std::cout << "4. Quit Game.\n";

    waitForSpace();

    std::cin >> choice;

    if (choice == 1) {
        handleTownScenario();
    }
    else if (choice == 2) {
        handleRiverScenario();
    }
    else if (choice == 3) {
        handleForestScenario();
    }
    else if (choice == 4) {
        std::cout << "You decided to quit the game.\n";
        points.finalPoints();
        return;
    }
    else {
        std::cout << "Invalid choice. Game Over.\n";
        return;
    }

    handleCaveScenario();
}

// Town scenario
void GameManager::handleTownScenario() {
    setLocation("Nearest Town");
    std::cout << "You are at: Nearest Town\n";
    std::cout << "You ask a local villager about your sister.\n";
    std::cout << "He gives you a gift and wishes you luck.\n";
    player.addItem("Lighter");
    points.addPoints(3);
    std::cout << "You gained 3 points and a Lighter!\n";
    std::cout << "---Current points: ";
    displayPoints();
    std::cout << "---\n";

    waitForSpace();
}

// River scenario
void GameManager::handleRiverScenario() {
    setLocation("River");
    std::cout << "You are at: River\n";
    std::cout << "The river had no leads, but you decide to continue following it.\n";
    std::cout << "You gained 0 points.\n";
    std::cout << "---Current points: ";
    displayPoints();
    std::cout << "---\n";

    waitForSpace();
}

// Forest scenario
void GameManager::handleForestScenario() {
    setLocation("Forest");
    std::cout << "You are at: Forest\n";
    std::cout << "While you have lived here all your life, you have never been good at directions.\n";
    std::cout << "You are lost. It feels like you have managed to walk into every tree and stumble on every fallen branch in the entire forest, but you keep going.\n";
    points.removePoints(2);
    std::cout << "-2\n";
    std::cout << "---Current points: ";
    displayPoints();
    std::cout << "---\n";

    waitForSpace();
}

// Cave scenario
void GameManager::handleCaveScenario() {
    std::cout << "After stumbling around for what feels like hours, you find yourself entering a cave with an eerie vibe to it.\n";

    // Check if the player has a lighter
    if (player.getInventory().end() == std::find(player.getInventory().begin(), player.getInventory().end(), "Lighter")) {
        std::cout << "Without a light source, you stumble in the dark and never find your sister.\n";
        std::cout << "---GAME OVER---\n";
        return;
    }

    std::cout << "Thanks to the villager’s gift, you don’t have to wander around in the dark!\n";
    points.addPoints(1);
    std::cout << "+1 Point\n";
    std::cout << "---Current points: ";
    displayPoints();
    std::cout << "---\n";

    waitForSpace();

    // Plant fight sequence
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
        std::cout << "---Current points: ";
        displayPoints();
        std::cout << "---\n";
    }
    else if (choice == 2) {
        std::cout << "You throw the lighter towards the monster, igniting it in flames!\n";
        std::cout << "As it falls, you find an old lifejacket nearby.\n";
        player.addItem("Old Lifejacket");
        points.addPoints(6); // Major reward for defeating the monster
        std::cout << "+6 Points and an Old Lifejacket\n";
        std::cout << "---Current points: ";
        displayPoints();
        std::cout << "---\n";
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

    waitForSpace();

    handleSeaScenario(); // Transition to the sea level after the cave
}


// Sea scenario
void GameManager::handleSeaScenario() {
    Sea sea;
    sea.interact(player, points);
}

// Display points
void GameManager::displayPoints() const {
    points.getPoints();
}

void GameManager::displayCurrentLocation() const {
    std::cout << "Current location: " << currentLocation << std::endl;
}

// Set the current location
void GameManager::setLocation(const std::string& location) {
    currentLocation = location;
    std::cout << "Current location: " << currentLocation << "\n";
}

// Helper method to wait for the spacebar
void GameManager::waitForSpace() const {
    std::cout << "\nPress space to continue...\n";
    while (_getch() != ' '); // Wait until the spacebar is pressed
}
