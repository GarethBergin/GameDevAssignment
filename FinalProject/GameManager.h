#pragma once
#include <vector>
#include <memory>
#include "Level.h"
#include "Player.h"
#include "Points.h"

class GameManager {
private:
    std::vector<std::unique_ptr<Level>> levels;
    Player player;
    Points points;

public:
    void addLevel(std::unique_ptr<Level> level);
    void execute();
    virtual ~GameManager() = default;
};

