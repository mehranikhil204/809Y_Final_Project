#include <iostream>
#include <string>

#include "landbasedtracked.h"
char fp::LandBasedTracked::GetDirection()
{
    return 'd';
}

void fp::LandBasedTracked::MoveForward()
{
	std::cout << "LandBasedTracked::GoUp called" << std::endl;
}

void fp::LandBasedTracked::TurnLeft()
{
	std::cout << "LandBasedTracked::TurnLeft called" << std::endl;
}

void fp::LandBasedTracked::TurnRight()
{
	std::cout << "LandBasedTracked::TurnRight called" << std::endl;
}
