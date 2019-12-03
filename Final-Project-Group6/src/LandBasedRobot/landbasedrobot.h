/**
 * @class LandBasedRobot
 * @author Pranali Desai, Nikhil Mehra, Chayan Kumar Patodi, Zhengliang Liu, Justin Huemme, Kumar Sambhav
 * @date 12/02/2019
 * @file landbasedrobot.cpp
 * @brief Method Definitions
 */
#pragma once
#include <iostream>
#include <string>

namespace fp
{

class LandBasedRobot
{
protected:
        /*! Name of the robot.*/
        std::string name_;
        /*!Driving speed of the robot.*/
        double speed_;
        /*! Width of the base of the robot.*/
        double width_;
        /*!Length of the base of the robot.*/
        double length_;
        /*!Height of the base of the robot.*/
        double height_;
        /*!Payload of the arm.*/
        double capacity_;
        /*!X coordinate of the robot in the maze.*/
        int x_;
        /*!Y coordinate of the robot in the maze.*/
        int y_;
        /*!Direction of robot*/
        char direction_;

public:
        /**
        * @brief 3-Parameter Constructor for LandBasedRobot.
        * @param Robot Name
        * @param x coordinate
        * @param y coordinate
        */
        LandBasedRobot(std::string name = "default_robot", double speed = 0, double width = 0, double length = 0, double height = 0, double capacity = 0, int x = 0, int y = 0, char direction = 'X')
        :name_{name}, speed_{speed}, width_{width}, length_{length}, height_{height}, capacity_ {capacity}, x_{x}, y_{y}, direction_{direction} {}
        
        //!Get direction of robot.
        virtual char GetDirection() = 0;
        //!Move robot further/forward.
        /*! 
         * @param int x coordinate is first argument
         * @param int y coordinate is second argument
         */
        virtual void MoveForward() = 0;
        //!Move the robot left in the maze.
        /*! 
         * @param int x coordinate is first argument
         * @param int y coordinate is second argument
         */
        virtual void TurnLeft() = 0;
        //!Move the robot right in the maze.
        /*! 
         * @param int x coordinate is first argument
         * @param int y coordinate is second argument
         */
        virtual void TurnRight() = 0;
        /**
         * @brief Accessor to get the x coordinate of the robot.
         * @return x coordinate of the robot
         */
        virtual int get_x() const = 0;
        /**
         * @brief Accessor to get the y coordinate of the robot.
         * @return y coordinate of the robot
         */
        virtual int get_y() const = 0;
        /**
         * @brief Destructor for the LandBasedRobot.
         */
        virtual ~LandBasedRobot() {}
};

}