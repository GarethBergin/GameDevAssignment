#pragma once
#include "Level.h"

class RiverLevel : public Level {
public:
    // Constructor (if needed, else it uses the base constructor)
    RiverLevel(std::string desc, int pts) : Level(desc, pts) {}

    void startLevel() override;
    void presentChoices() override;
    void handleChoice(int choice) override;
};
