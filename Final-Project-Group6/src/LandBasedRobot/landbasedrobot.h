#pragma once
#include <iostream>
#include <string>

namespace fp
{

class LandBasedRobot
{
protected:
        std::string name_;
        double speed_;
        double width_;
        double length_;
        double height_;
        double capacity_;
        int x_;
        int y_;
        char direction_;

public:
        LandBasedRobot(std::string name = "default_robot", double speed = 0, double width = 0, double length = 0, double height = 0, double capacity = 0, int x = 0, int y = 0, char direction = 'X')
        :name_{name}, speed_{speed}, width_{width}, length_{length}, height_{height}, capacity_ {capacity}, x_{x}, y_{y}, direction_{direction} {}
        
        virtual char GetDirection() = 0;
        virtual void MoveForward() = 0;
        virtual void TurnLeft() = 0;
        virtual void TurnRight() = 0;
        virtual int get_x() const = 0;
        virtual int get_y() const = 0;
        virtual ~LandBasedRobot() {}
};

}