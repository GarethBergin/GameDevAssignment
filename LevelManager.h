// LevelManager.h
#ifndef LEVELMANAGER_H
#define LEVELMANAGER_H

#include "HouseLevel.h"
#include "CaveLevel.h"
#include "ForestLevel.h"
#include "RiverLevel.h"
#include "FinalLevel.h"

class LevelManager {
private:
    Level* currentLevel;

public:
    void playGame();
    void transitionToNextLevel(Level* newLevel);
};

#endif
