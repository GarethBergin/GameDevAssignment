#pragma once
#include "Level.h"
#include "Player.h"
#include "Points.h"

class FinalLevel : public Level {
public:
    void startFirstChoice(Player& player, Points& points) override;
    void startLevel(Player& player, Points& points) override;
};
