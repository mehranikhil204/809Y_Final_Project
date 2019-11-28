#include "landbasedtracked.h"

char fp::LandBasedTracked::GetDirection() {
    return direction_;
}

int fp::LandBasedTracked::get_x() const {
    return x_;
}

int fp::LandBasedTracked::get_y() const {
    return y_;
}

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
