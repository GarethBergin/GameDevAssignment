// CaveLevel.h
#ifndef CAVELEVEL_H
#define CAVELEVEL_H

#include "Level.h"

class CaveLevel : public Level {
public:
    CaveLevel();
    void playLevel() override;
};

#endif
