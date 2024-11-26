#pragma once
#include "Location.h"

class Sea : public Location {
public:
    Sea() : Location("Sea") {}
    void interact(Player& player, Points& points) override;
};
