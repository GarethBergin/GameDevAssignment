#pragma once
#include "Level.h"

class River : public Level {
public:
    void startFirstChoice(Player& player, Points& points) override;
    void startLevel(Player& player, Points& points) override;
};
