#include "landbasedtracked.h"
#include "../API/api.h"
#include <iostream>

char fp::LandBasedTracked::GetDirection()
{
    return 'd';
}

void fp::LandBasedTracked::MoveForward()
{
    std::cout<<"LandBasedTracked::MoveForward is called\n";
    API::moveForward();
}

void fp::LandBasedTracked::TurnLeft()
{
	std::cout << "LandBasedTracked::TurnLeft called" << std::endl;
}

void fp::LandBasedTracked::TurnRight()
{
	std::cout << "LandBasedTracked::TurnRight called" << std::endl;
}
