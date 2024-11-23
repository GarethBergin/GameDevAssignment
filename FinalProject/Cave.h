#pragma once
#include "Level.h"

class Cave : public Level {
public:
    void startFirstChoice(Player& player, Points& points) override;
    void startLevel(Player& player, Points& points) override;
};
