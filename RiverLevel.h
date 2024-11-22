// RiverLevel.h
#ifndef RIVERLEVEL_H
#define RIVERLEVEL_H

#include "Level.h"

class RiverLevel : public Level {
public:
    RiverLevel();
    void playLevel() override;
};

#endif
