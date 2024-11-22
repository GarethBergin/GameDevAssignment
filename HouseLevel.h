// HouseLevel.h
#ifndef HOUSELEVEL_H
#define HOUSELEVEL_H

#include "Level.h"

class HouseLevel : public Level {
public:
    HouseLevel();
    void playLevel() override;
};

#endif
