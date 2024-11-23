#pragma once
#include "Player.h"
#include "Points.h"

class Level {
public:
    virtual void startFirstChoice(Player& player, Points& points) = 0;
    virtual void startLevel(Player& player, Points& points) = 0;
    virtual ~Level() = default;
};

