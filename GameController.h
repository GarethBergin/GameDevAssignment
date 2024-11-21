#pragma once

class GameController
{
private:
	
	int points;
	std::string location;

public:
	GameController();
	void gameOver();
	void startGame(int points, std::string location);
};