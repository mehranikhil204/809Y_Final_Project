#pragma once
#include <iostream>
#include <string>
#include "../LandBasedRobot/landbasedrobot.h"
#include "../API/api.h"

namespace fp
{

class LandBasedTracked : public LandBasedRobot
{
protected:
/*!Type of track mounted on the robot*/
        std::string track_type;

public:
/**
 * @brief 3-Parameter Constructor for LandBasedTracked.
 */
        LandBasedTracked(std::string track_ty = "None", std::string name = "default_robot", double speed = 0, double width = 0, double length = 0, double height = 0, double capacity = 0, int x = 0, int y = 0, char direction = 'X')
        :LandBasedRobot(name, speed, width, length, height, capacity, x, y, direction), track_type{track_ty}{}
        /**
         * @brief get robot direction
         */
        virtual char GetDirection() override;
        /**
         * @brief Move Forward
         */
        virtual void MoveForward() override;
        /**
         * @brief Move Robot Left
         */
        virtual void TurnLeft() override;
        /**
         * @brief Move Robot Right
         */
        virtual void TurnRight() override;

        int get_x() const;
        int get_y() const; 
        /**
         * @brief Destructor for the LandBasedTracked.
         */	
        virtual ~LandBasedTracked() {}
		
};

}