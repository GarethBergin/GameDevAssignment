#pragma once
#include "Level.h"
#include <vector>
#include <memory>

class LevelManager {
private:
    std::vector<std::shared_ptr<Level>> levels; // All levels in the game
    int currentLevelIndex;

public:
    LevelManager();
    void startGame(); // Start the game and run through the levels
    void goToNextLevel(); // Move to the next level
};
