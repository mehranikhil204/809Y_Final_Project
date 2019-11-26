#include <iostream>
#include "src/Maze/maze.h"
#include "src/API/api.h"
#include "src/LandBasedWheeled/landbasedwheeled.h"
#include "src/Algorithm/algorithm.h"

int main()
{
    fp::Maze maze;
    // Parameters wheel_number, name, speed, width, length, height, capacity, x, y, direction 
    fp::LandBasedWheeled robot(2, "robot1", 0, 10, 10, 10, 0, 0, 0, 'N');
    
    fp::Algorithm dfs;
    dfs.SolveDFS(robot, maze);
    
    return 0;
}
