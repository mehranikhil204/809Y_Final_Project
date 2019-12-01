#include "maze.h"

//initializing wall matrix
// Maze class Constructor
fp::Maze::Maze()
{
    fp::API::setColor(0,0,'w');
    fp::API::setText(0,0,"Start");
    fp::API::setColor(7,7,'w');
    fp::API::setText(7,7,"Goal");
    fp::API::setColor(7,8,'w');
    fp::API::setText(7,8,"Goal");
    fp::API::setColor(8,7,'w');
    fp::API::setText(8,7,"Goal");
    fp::API::setColor(8,8,'w');
    fp::API::setText(8,8,"Goal");
    
    // All walls except boundary walls are initialized as false 
    for(int i = 0; i < 16; i++) { // Looping in x-axis
        for(int j = 0; j < 16; j++) { // Looping in y-axis
            if(i == 0) {
                westwall_[i][j] = true;
                fp::API::setWall(i, j, 'w'); // Left Boundary
            }
            if(i == 15) {
                eastwall_[i][j] = true;
                fp::API::setWall(i, j, 'e'); // Rigth Boundary
            }
            if(j == 0){
                 southwall_[i][j] = true;
                 fp::API::setWall(i, j, 's'); // Bottom Boundary
            }
            if(j == 15){
                 northwall_[i][j] = true;
                 fp::API::setWall(i, j, 'n'); // Top Boundary
            }   
            
            if(i != 0 && j != 0 && i != 15 && j != 15) // All other walls
            { 
                northwall_[i][j] = false;
                eastwall_[i][j] = false;
                westwall_[i][j] = false;
                southwall_[i][j] = false;
            }
        }
    }
}

void fp::Maze::MazeUpdate(int x, int y, char d) {
    // When robot is facing in the North direction
    fp::API::setColor(0,0,'G');
    fp::API::setText(0,0,"Start");
    fp::API::setColor(7,7,'G');
    fp::API::setText(7,7,"Goal");
    fp::API::setColor(7,8,'G');
    fp::API::setText(7,8,"Goal");
    fp::API::setColor(8,7,'G');
    fp::API::setText(8,7,"Goal");
    fp::API::setColor(8,8,'G');
    fp::API::setText(8,8,"Goal");
    if(d == 'N') {
        if(fp::API::wallFront()) {
            fp::API::setWall(x, y, 'n');
            northwall_[x][y] = true;
        }
        if(fp::API::wallLeft()) {
            fp::API::setWall(x, y, 'w');
            westwall_[x][y] = true;
        }
        if(fp::API::wallRight()) {
            fp::API::setWall(x, y, 'e');
            eastwall_[x][y] = true;
        }
    }
    // When robot is facing in the West direction
    if(d == 'W') {
        if(fp::API::wallFront()) {
            fp::API::setWall(x, y, 'w');
            westwall_[x][y] = true;
        }
        if(fp::API::wallLeft()) {
            fp::API::setWall(x, y, 's');
            southwall_[x][y] = true;
        }
        if(fp::API::wallRight()) {
            fp::API::setWall(x, y, 'n');
            northwall_[x][y] = true;
        }
    }
    // When robot is facing in the East direction
    if(d == 'E') {
        if(fp::API::wallFront()) {
            fp::API::setWall(x, y, 'e');
            eastwall_[x][y] = true;
        }
        if(fp::API::wallLeft()) {
            fp::API::setWall(x, y, 'n');
            northwall_[x][y] = true;
        }
        if(fp::API::wallRight()) {
            fp::API::setWall(x, y, 's');
            southwall_[x][y] = true;
        }
    }
    // When robot is facing in the South direction
    if(d == 'S') {
        if(fp::API::wallFront()) {
            fp::API::setWall(x, y, 's');
            southwall_[x][y] = true;
        }
        if(fp::API::wallLeft()) {
            fp::API::setWall(x, y, 'e');
            eastwall_[x][y] = true;
        }
        if(fp::API::wallRight()) {
            fp::API::setWall(x, y, 'w');
            westwall_[x][y] = true;
        }
    }
}

void fp::Maze::DisplayMazeData(int x, int y) {
    std::cout<< "Data at (" << x << "," << y << "): N:" << northwall_[x][y] << " E:" << eastwall_[x][y] << " W:" << westwall_[x][y] << " S:" << southwall_[x][y] << std::endl;
}

bool fp::Maze::get_northwall(int x, int y) const{
    return northwall_[x][y];
}

bool fp::Maze::get_eastwall(int x, int y) const{
    return eastwall_[x][y];
}

bool fp::Maze::get_westwall(int x, int y) const{
    return westwall_[x][y];
}

bool fp::Maze::get_southwall(int x, int y) const{
    return southwall_[x][y];
}

void fp::Maze::set_northwall(int x, int y) {
    northwall_[x][y] = true;
}

void fp::Maze::set_eastwall(int x, int y) {
    eastwall_[x][y] = true;
}

void fp::Maze::set_westwall(int x, int y) {
    westwall_[x][y] = true;
}

void fp::Maze::set_southwall(int x, int y) {
    southwall_[x][y] = true;
}