#pragma once
#include "Location.h"

class River : public Location {
public:
    River() : Location("River") {}
    void interact(Player& player, Points& points) override;
};
