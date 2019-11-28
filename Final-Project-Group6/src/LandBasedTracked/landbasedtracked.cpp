#include "landbasedtracked.h"
<<<<<<< HEAD
=======
#include "../API/api.h"
#include <iostream>

>>>>>>> 6602ec65d7fb505d3d753887d81da8a25250ff2d

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
