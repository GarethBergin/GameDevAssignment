#pragma once
#include "Level.h"
#include "Player.h"
#include "Points.h"

class Forest : public Level {
public:
    Forest() = default; // Default constructor
    void startFirstChoice(Player& player, Points& points) override;
    void startLevel(Player& player, Points& points) override;
};
