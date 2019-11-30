#pragma once
#include <array>
#include <iostream>
#include "../API/api.h"

namespace fp
{

class Maze
{
    private:
        // Four 2-D arrays for four probable walls around a cell  
        std::array<std::array<bool, 16>, 16> northwall_;
        std::array<std::array<bool, 16>, 16> eastwall_;
        std::array<std::array<bool, 16>, 16> westwall_;
        std::array<std::array<bool, 16>, 16> southwall_;
            
    public:
        Maze();
        
        // For Displaying data of a cell
        void DisplayMazeData(int, int); 
        // For updating wall arrays corresponding to a cell
        void MazeUpdate(int, int, char); 
        
        // Whether there is a wall in north or not
        bool get_northwall(int, int) const; 
        // Whether there is a wall in east or not
        bool get_eastwall(int, int) const;
        // Whether there is a wall in west or not
        bool get_westwall(int, int) const;
        // Whether there is a wall in south or not
        bool get_southwall(int, int) const;
        
        // Set wall in the north direction
        void set_northwall(int, int);
        // Set wall in the east direction
        void set_eastwall(int, int);
        // Set wall in the west direction
        void set_westwall(int, int);
        // Set wall in the south direction
        void set_southwall(int, int);
        
        ~Maze() {}

};

}

