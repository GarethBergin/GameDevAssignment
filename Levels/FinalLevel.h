#pragma once
#include "Level.h"

class FinalLevel : public Level {
public:
    // Constructor with arguments to call base class constructor
    FinalLevel(std::string desc, int pts) : Level(desc, pts) {}

    void startLevel() override;
    void presentChoices() override;
    void handleChoice(int choice) override;
};
