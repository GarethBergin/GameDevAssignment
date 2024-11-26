#pragma once
#include "Location.h"

class Town : public Location {
public:
    Town() : Location("Nearest Town") {}
    void interact(Player& player, Points& points) override;
};
