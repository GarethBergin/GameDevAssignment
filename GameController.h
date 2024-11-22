#pragma once

class GameController
{
private:
	
	int points;
	std::string location;

public:
	GameController();
	void gameOver();
	virtual int GetPoints() const = 0;
	virtual std::string GetLocation() const = 0;
	void startGame(int points, std::string location);
	


	void addPoints(int add)
	{
		points += add;
	}

	void removePoints(int remove)
	{
		points -= remove;
		
	}

	virtual ~GameController() = default;
};