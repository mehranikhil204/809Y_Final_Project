#pragma once
#include <iostream>
#include <utility>
#include <algorithm> 
#include <vector>
#include <map> 
#include "../LandBasedWheeled/landbasedwheeled.h"
#include "../LandBasedTracked/landbasedtracked.h"
#include "../Maze/maze.h"
<<<<<<< HEAD
=======
#include "../API/api.h"
>>>>>>> 6602ec65d7fb505d3d753887d81da8a25250ff2d

namespace fp
{

class Algorithm
{
    private:
<<<<<<< HEAD
        std::vector<std::pair<std::pair<int, int>, char>> summary_;
        std::map<std::pair<std::pair<int, int>, char>, std::pair<std::pair<int, int>, char>> parent_;
        std::vector<std::pair<std::pair<int, int>, char>> frontier_;
        std::pair<std::pair<int, int>, char> current_;
        std::vector<std::pair<std::pair<int, int>, char>> path_;
        
    public:
        bool CheckGoal(int, int);
        void SolveBFS(fp::LandBasedWheeled&, fp::Maze&);
        bool CheckSummary(std::pair<std::pair<int, int>, char>);
        bool CheckFrontier(std::pair<std::pair<int, int>, char>);
        bool MoveRobot(fp::LandBasedWheeled&, fp::Maze&);
=======
        std::vector<std::pair<std::pair<int, int>, char> > summary_;
        std::map<std::pair<std::pair<int, int>, char>, std::pair<std::pair<int, int>, char> > parent_;
        std::vector<std::pair<std::pair<int, int>, char> > frontier_;
        std::pair<std::pair<int, int>, char> current_;
        std::vector<std::pair<std::pair<int, int>, char> > path_;
        
    public:
        bool CheckGoal(int, int);
        void SolveDFS(fp::LandBasedWheeled, fp::Maze);
        bool CheckSummary(std::pair<std::pair<int, int>, char>);
        bool CheckFrontier(std::pair<std::pair<int, int>, char>);
>>>>>>> 6602ec65d7fb505d3d753887d81da8a25250ff2d

};

}

