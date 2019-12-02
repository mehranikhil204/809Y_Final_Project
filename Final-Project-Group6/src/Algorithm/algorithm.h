#pragma once
#include <iostream>
#include <utility>
#include <algorithm> 
#include <memory>
#include <vector>
#include <map> 
#include "../LandBasedWheeled/landbasedwheeled.h"
#include "../LandBasedTracked/landbasedtracked.h"
#include "../Maze/maze.h"
#include "../API/api.h"

namespace fp
{

class Algorithm
{
    private:
        /**
        * @brief Variable to store Vector of pairs for storing over all summary
        */
        std::vector<std::pair<std::pair<int, int>, char>> summary_;
        /**
        * @brief Variable to store Map object for pairs for storing parent
        */
        std::map<std::pair<std::pair<int, int>, char>, std::pair<std::pair<int, int>, char>> parent_;
        // Vector of pairs for implementing BFS
        std::vector<std::pair<std::pair<int, int>, char>> frontier_;
        // Pair object to store current position(state) details
        std::pair<std::pair<int, int>, char> current_;
        // Vector of pairs for storing back_tracked path
        std::vector<std::pair<std::pair<int, int>, char>> path_;
        
    public:
    
        // For checking if the goal is reached or not
        bool CheckGoal(int, int);
        // Heart of the BFS Algorithm with back-tracking
        void SolveBFS(std::shared_ptr<fp::LandBasedRobot>, fp::Maze&);
        // For checking if any state is already explored or not
        bool CheckSummary(std::pair<std::pair<int, int>, char>);
        // For checking if any state is already in the frontier or not
        bool CheckFrontier(std::pair<std::pair<int, int>, char>);
        // Method for moving robot after finding path with BFS
        bool MoveRobot(std::shared_ptr<fp::LandBasedRobot>, fp::Maze&);

};

}

