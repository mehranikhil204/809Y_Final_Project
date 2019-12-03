/**
 * @class LandBasedTracked
 * @author Pranali Desai, Nikhil Mehra, Chayan Kumar Patodi, Zhengliang Liu, Justin Huemme, Kumar Sambhav
 * @date 12/02/2019
 * @file landbasedtracked.cpp
 * @brief Method Definitions
 */
#include "landbasedtracked.h"
#include "../API/api.h"
#include <iostream>

char fp::LandBasedTracked::GetDirection() {
    return direction_;
}

int fp::LandBasedTracked::get_x() const {
    return x_;
}

int fp::LandBasedTracked::get_y() const {
    return y_;
}
/**
 * @brief Go forward
 * @param x coordinate
 * @param y coordinate
 */
void fp::LandBasedTracked::MoveForward()
{
	fp::API::moveForward();
    if(fp::LandBasedTracked::GetDirection() == 'N') {
        x_ = x_;
        y_ = y_ + 1;
    }
    else { 
        if(fp::LandBasedTracked::GetDirection() == 'E') {
            x_ = x_ + 1;
            y_ = y_;
        }
        else {
            if(fp::LandBasedTracked::GetDirection() == 'W') {
                x_ = x_ - 1;
                y_ = y_;
            }
            else {
                if(fp::LandBasedTracked::GetDirection() == 'S') {
                    x_ = x_;
                    y_ = y_ - 1;
                }
            }
        }
    }
}
/**
 * @brief Go Left Method
 * @param x coordinate
 * @param y coordinate
 */
void fp::LandBasedTracked::TurnLeft()
{
	fp::API::turnLeft();
    if(fp::LandBasedTracked::GetDirection() == 'N')
        direction_ = 'W';
    else { 
        if(fp::LandBasedTracked::GetDirection() == 'E')
            direction_ = 'N';
        else {
            if(fp::LandBasedTracked::GetDirection() == 'W')
                direction_ = 'S';
            else {
                if(fp::LandBasedTracked::GetDirection() == 'S')
                    direction_ = 'E';
            }
        }
    }
}
/**
 * @brief Go Right Method
 * @param x coordinate
 * @param y coordinate
 */
void fp::LandBasedTracked::TurnRight()
{
	fp::API::turnRight();
    if(fp::LandBasedTracked::GetDirection() == 'N')
        direction_ = 'E';
    else { 
        if(fp::LandBasedTracked::GetDirection() == 'E')
            direction_ = 'S';
        else {
            if(fp::LandBasedTracked::GetDirection() == 'W')
                direction_ = 'N';
            else {
                if(fp::LandBasedTracked::GetDirection() == 'S')
                    direction_ = 'W';
            }
        }
    }
}
