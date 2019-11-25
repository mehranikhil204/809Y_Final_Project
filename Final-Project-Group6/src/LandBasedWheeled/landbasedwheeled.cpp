#include "landbasedwheeled.h"
#include "../API/api.h"

char fp::LandBasedWheeled::GetDirection() {
    return direction_;
}

int fp::LandBasedWheeled::get_x() const {
    return x_;
}

int fp::LandBasedWheeled::get_y() const {
    return y_;
}

void fp::LandBasedWheeled::MoveForward()
{
	fp::API::moveForward();
    if(fp::LandBasedWheeled::GetDirection() == 'N') {
        x_ = x_;
        y_ = y_ + 1;
        direction_ = 'N';
    }
    else { 
        if(fp::LandBasedWheeled::GetDirection() == 'E') {
            x_ = x_ + 1;
            y_ = y_;
            direction_ = 'E';
        }
        else {
            if(fp::LandBasedWheeled::GetDirection() == 'W') {
                x_ = x_ - 1;
                y_ = y_;
                direction_ = 'W';
            }
            else {
                if(fp::LandBasedWheeled::GetDirection() == 'S') {
                    x_ = x_;
                    y_ = y_ - 1;
                    direction_ = 'S';
                }
            }
        }
    }
}

void fp::LandBasedWheeled::TurnLeft()
{
	fp::API::turnLeft();
    if(fp::LandBasedWheeled::GetDirection() == 'N') {
        x_ = x_ - 1;
        y_ = y_;
        direction_ = 'W';
    }
    else { 
        if(fp::LandBasedWheeled::GetDirection() == 'E') {
            x_ = x_;
            y_ = y_ + 1;
            direction_ = 'N';
        }
        else {
            if(fp::LandBasedWheeled::GetDirection() == 'W') {
                x_ = x_;
                y_ = y_ - 1;
                direction_ = 'S';
            }
            else {
                if(fp::LandBasedWheeled::GetDirection() == 'S') {
                    x_ = x_ + 1;
                    y_ = y_;
                    direction_ = 'E';
                }
            }
        }
    }
}

void fp::LandBasedWheeled::TurnRight()
{
	fp::API::turnRight();
    if(fp::LandBasedWheeled::GetDirection() == 'N') {
        x_ = x_ + 1;
        y_ = y_;
        direction_ = 'E';
    }
    else { 
        if(fp::LandBasedWheeled::GetDirection() == 'E') {
            x_ = x_;
            y_ = y_ - 1;
            direction_ = 'S';
        }
        else {
            if(fp::LandBasedWheeled::GetDirection() == 'W') {
                x_ = x_;
                y_ = y_ + 1;
                direction_ = 'N';
            }
            else {
                if(fp::LandBasedWheeled::GetDirection() == 'S') {
                    x_ = x_ - 1;
                    y_ = y_;
                    direction_ = 'W';
                }
            }
        }
    }
}

void fp::LandBasedWheeled::SpeedUp(int x)
{
	std::cout << "LandBasedWheeled::Speedup is called" << std::endl;
}