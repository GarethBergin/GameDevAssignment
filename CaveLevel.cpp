// CaveLevel.cpp
#include "CaveLevel.h"

CaveLevel::CaveLevel() : Level("You enter a dark cave with eerie vibes. You hear a sound...", 3) {}

void CaveLevel::playLevel() {
    std::cout << "What will you do?" << std::endl;
    // Handle interactions specific to the cave (e.g., fighting or escaping the monster)
}
