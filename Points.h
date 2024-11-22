#pragma once
#include <iostream>
class Points
{
private:
	int points;

public:
	void getPoints()
	{
		std::cout << "Current points: " << points << std::endl;
	}

	void addPoints(int add)
	{
		points += add;
		std::cout << "Current points: " << points << std::endl;
	}

	void removePoints(int remove)
	{
		points -= remove;
		std::cout << "Current points: " << points << std::endl;
	}
};

