// LevelManager.cpp
#include "LevelManager.h"

void LevelManager::playGame() {
    currentLevel = new HouseLevel();
    currentLevel->playLevel();
}

void LevelManager::transitionToNextLevel(Level* newLevel) {
    delete currentLevel;
    currentLevel = newLevel;
    currentLevel->playLevel();
}
