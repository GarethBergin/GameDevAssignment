#include "LevelManager.h"
#include <iostream>
#include "HouseLevel.h"      
#include "ForestLevel.h"   
#include "CaveLevel.h"       
#include "RiverLevel.h"      
#include "FinalLevel.h"      
#include "LevelManager.h"
#include <iostream>

// Constructor
LevelManager::LevelManager() : currentLevelIndex(0) {
    levels.push_back(std::make_shared<HouseLevel>("You awaken to see your home in a total mess. Your sister is missing.", 10));
    levels.push_back(std::make_shared<ForestLevel>("You are in the forest. You've been walking for a while, but you're lost.", 20));
    levels.push_back(std::make_shared<CaveLevel>("After stumbling around for hours, you find yourself entering a cave.", 30));
    levels.push_back(std::make_shared<RiverLevel>("You find yourself at the riverbank, but you see no sign of your sister.", 40));
    levels.push_back(std::make_shared<FinalLevel>("You reach the final level, but the mystery is still unsolved.", 50));
}

// Function definition
void LevelManager::startGame() {
    while (currentLevelIndex < levels.size()) {
        levels[currentLevelIndex]->startLevel();
        currentLevelIndex++;
    }
}

void LevelManager::goToNextLevel() {
    if (currentLevelIndex < levels.size()) {
        levels[currentLevelIndex]->startLevel();
        currentLevelIndex++;
    }
}
