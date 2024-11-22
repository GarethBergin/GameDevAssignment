#include "Points.h"
#include <iostream>


void Points::getPoints()
{
	std::cout << "Current points: " << points << std::endl;
}

void Points::addPoints(int add)
{
	points += add;
	std::cout << "Current points: " << points << std::endl;
}

void Points::removePoints(int remove)
{
	points -= remove;
	std::cout << "Current points: " << points << std::endl;
}