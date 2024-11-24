#include "Points.h"
#include "Location.h"
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

void Points::finalPoints()
{
	std::cout << "Final points: " << points << std::endl;
}

void Location::getLocation(std::string location)
{
	std::cout << "Current location: " << location << std::endl;
}