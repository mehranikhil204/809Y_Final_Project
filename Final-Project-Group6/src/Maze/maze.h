#pragma once
#include <array>
#include <iostream>

namespace fp
{

class Maze
{
    private:
        // Four 2-D arrays for four probable walls around a  
        std::array<std::array<bool, 16>, 16> northwall_;
        std::array<std::array<bool, 16>, 16> eastwall_;
        std::array<std::array<bool, 16>, 16> westwall_;
        std::array<std::array<bool, 16>, 16> southwall_;
            
    public:
        Maze();
        
        void DisplayMazeData(int, int);
        
        bool get_northwall(int, int) const;
        bool get_eastwall(int, int) const;
        bool get_westwall(int, int) const;
        bool get_southwall(int, int) const;
        
        void set_northwall(int, int);
        void set_eastwall(int, int);
        void set_westwall(int, int);
        void set_southwall(int, int);
        
        ~Maze() {}

};

}

