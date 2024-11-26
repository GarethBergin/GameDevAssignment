#pragma once
#include "Location.h"
#include "Player.h"
#include "Points.h"

class Forest : public Location {
public:
    void interact(Player& player, Points& points) override;
};
