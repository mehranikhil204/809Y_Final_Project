/**
 * @class LandBasedWheeled
 * @author Pranali Desai, Nikhil Mehra, Chayan Kumar Patodi, Zhengliang Liu, Justin Huemme, Kumar Sambhav
 * @date 12/02/2019
 * @file landbasedwheeled.cpp
 * @brief Method Definitions
 */
#include "landbasedwheeled.h"
#include "../API/api.h"
/**
* @brief A function to get direction
* @author Group 6
* @return Result is the direction
*/
char fp::LandBasedWheeled::GetDirection() {
    return direction_;
}

int fp::LandBasedWheeled::get_x() const {
    return x_;
}

int fp::LandBasedWheeled::get_y() const {
    return y_;
}
/**
* @brief A function to move robot further
* @author Group 6
* @return Result as x,y coordinate
*/
void fp::LandBasedWheeled::MoveForward()
{
	fp::API::moveForward();
    if(fp::LandBasedWheeled::GetDirection() == 'N') {
        x_ = x_;
        y_ = y_ + 1;
    }
    else { 
        if(fp::LandBasedWheeled::GetDirection() == 'E') {
            x_ = x_ + 1;
            y_ = y_;
        }
        else {
            if(fp::LandBasedWheeled::GetDirection() == 'W') {
                x_ = x_ - 1;
                y_ = y_;
            }
            else {
                if(fp::LandBasedWheeled::GetDirection() == 'S') {
                    x_ = x_;
                    y_ = y_ - 1;
                }
            }
        }
    }
}
/**
* @brief A function to turn robot left
* @author Group 6
* @return Result is the new direction
*/
void fp::LandBasedWheeled::TurnLeft()
{
	fp::API::turnLeft();
    if(fp::LandBasedWheeled::GetDirection() == 'N')
        direction_ = 'W';
    else { 
        if(fp::LandBasedWheeled::GetDirection() == 'E')
            direction_ = 'N';
        else {
            if(fp::LandBasedWheeled::GetDirection() == 'W')
                direction_ = 'S';
            else {
                if(fp::LandBasedWheeled::GetDirection() == 'S')
                    direction_ = 'E';
            }
        }
    }
}
/**
* @brief A function to turn robot right
* @author Group 6
* @return Result is the new direction
*/
void fp::LandBasedWheeled::TurnRight()
{
	fp::API::turnRight();
    if(fp::LandBasedWheeled::GetDirection() == 'N')
        direction_ = 'E';
    else { 
        if(fp::LandBasedWheeled::GetDirection() == 'E')
            direction_ = 'S';
        else {
            if(fp::LandBasedWheeled::GetDirection() == 'W')
                direction_ = 'N';
            else {
                if(fp::LandBasedWheeled::GetDirection() == 'S')
                    direction_ = 'W';
            }
        }
    }
}
/**
* @brief A function to increase speed of robot
* @author Group 6
* @return Result is the new speed
*/
void fp::LandBasedWheeled::SpeedUp(int x)
{
	std::cout << "LandBasedWheeled::Speedup is called" << std::endl;
}