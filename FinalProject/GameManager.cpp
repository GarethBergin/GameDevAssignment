#include "GameManager.h"
#include <iostream>

void GameManager::addLevel(std::unique_ptr<Level> level) {
    levels.push_back(std::move(level));
}

void GameManager::execute() {
    size_t currentLevelIndex = 0;

    while (currentLevelIndex < levels.size()) {
        Level* currentLevel = levels[currentLevelIndex].get();

        if (currentLevelIndex == 0) {
            currentLevel->startFirstChoice(player, points);
        }
        else {
            currentLevel->startLevel(player, points);
        }

        if (points.getPointsValue() <= 0) {
            std::cout << "You have lost all your points. Game Over.\n";
            return;
        }

        // Ask if the player wants to continue
        if (currentLevelIndex < levels.size() - 1) { // Skip on the last level
            std::cout << "Press 'y' to continue to the next level or 'n' to quit.\n";
            char choiceToContinue;
            std::cin >> choiceToContinue;
            if (choiceToContinue == 'n' || choiceToContinue == 'N') {
                std::cout << "You chose to quit. Thanks for playing!\n";
                return;
            }
        }

        currentLevelIndex++;
    }

    std::cout << "Congratulations! You completed the game!\n";
}
