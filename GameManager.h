#pragma once

#include "Player.h"
#include "Points.h"

class GameManager {
private:
    Player player;
    Points points;
    std::string currentLocation;

    // Add the declaration for waitForSpace
    void waitForSpace() const;

public:
    GameManager();
    void startGame();

    // Scenario handlers
    void handleTownScenario();
    void handleRiverScenario();
    void handleForestScenario();
    void handleCaveScenario();
    void handleSeaScenario();

    // Helper functions
    void displayPoints() const;
    void setLocation(const std::string& location);
    void displayCurrentLocation() const;
};
