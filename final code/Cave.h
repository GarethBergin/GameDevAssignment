#pragma once
#include "Location.h"

class Cave : public Location {
public:
    Cave() : Location("Cave") {}
    void interact(Player& player, Points& points) override;
};
