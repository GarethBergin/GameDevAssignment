
#include <iostream>
#include "GameController.h"
int main()
{
    GameController gameController;
    int points;
    std::string location;

    gameController.startGame(points, location);
    gameController.gameOver();
}
