#pragma once
#include "Level.h"

class CaveLevel : public Level {
public:
    // Constructor with arguments to call base class constructor
    CaveLevel(std::string desc, int pts) : Level(desc, pts) {}

    void startLevel() override;
    void presentChoices() override;
    void handleChoice(int choice) override;
};
