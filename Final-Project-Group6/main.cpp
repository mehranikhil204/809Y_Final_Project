#include "src/Maze/maze.h"
#include "src/API/api.h"

int main()
{
    fp::Maze maze;
    maze.DisplayMazeData(0,0);
    fp::API::moveForward();
    std::cout << fp::API::wallFront() << std::endl;
    std::cout <<fp::API::wallLeft() << std::endl;
    std::cout << fp::API::wallRight() << std::endl;;
    return 0;
}
