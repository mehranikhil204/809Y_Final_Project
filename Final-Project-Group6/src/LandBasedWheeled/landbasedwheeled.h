#pragma once
#include <iostream>
#include <string>
#include "../LandBasedRobot/landbasedrobot.h"

namespace fp
{

class LandBasedWheeled : public LandBasedRobot
{
protected:
        /*! Number of wheels mounted on the robot*/
        int wheel_number;

public:
        /**
         * @brief Land Based Wheeled
         */
		LandBasedWheeled(int wheel_num = 2, std::string name = "default_robot", double speed = 0, double width = 0, double length = 0, double height = 0, double capacity = 0, int x = 0, int y = 0, char direction = 'X' )
        :LandBasedRobot(name, speed, width, length, height, capacity, x, y, direction), wheel_number{wheel_num}{}
        
        virtual char GetDirection() override;
        virtual void MoveForward() override;
        virtual void TurnLeft() override;
        virtual void TurnRight() override;
        void SpeedUp(int);
        
        int get_x() const;
        int get_y() const; 
        virtual ~LandBasedWheeled() {}

};

}