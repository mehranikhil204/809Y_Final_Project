#include "maze.h"

<<<<<<< HEAD
=======

//initializing wall matrix
>>>>>>> 6602ec65d7fb505d3d753887d81da8a25250ff2d
fp::Maze::Maze()
{
    for(int i = 0; i < 16; i++) {
        for(int j = 0; j < 16; j++) {
<<<<<<< HEAD
            if(i == 0) {
                westwall_[i][j] = true;
                fp::API::setWall(i, j, 'w');
            }
            if(i == 15) {
                eastwall_[i][j] = true;
                fp::API::setWall(i, j, 'e');
            }
            if(j == 0){
                 southwall_[i][j] = true;
                 fp::API::setWall(i, j, 's');
            }
            if(j == 15){
                 northwall_[i][j] = true;
                 fp::API::setWall(i, j, 'n');
            }   
            
            if(i != 0 && j != 0 && i != 15 && j != 15)
            { 
                northwall_[i][j] = false;
                eastwall_[i][j] = false;
                westwall_[i][j] = false;
                southwall_[i][j] = false;
            }
        }
    }
}

=======
            northwall_[i][j] = false;
            eastwall_[i][j] = false;
            westwall_[i][j] = false;
            southwall_[i][j] = false;
//            if(i = 0 && j =0){
//                southwall_[i][j] = true;
//                westwall_[i][j] = true;
//            }
//            if(i = 16 && j=0){
//                southwall_[i][j] = true;
//                eastwall_[i][j] = true;
//            }
//            if(i = 0 && j=16){
//                northwall_[i][j] = true;
//                westwall_[i][j] = true;
//            }
//            if(i = 16 && j=16){
//                northwall_[i][j] = true;
//                eastwall_[i][j] = true;
//            }
//            if((i != 0 || i != 16) && j=0){
//                southwall_[i][j] = true;
//            }
    }
}
}
>>>>>>> 6602ec65d7fb505d3d753887d81da8a25250ff2d
void fp::Maze::MazeUpdate(int x, int y, char d) {
    
    if(d == 'N') {
        if(fp::API::wallFront()) {
            fp::API::setWall(x, y, 'n');
            northwall_[x][y] = true;
<<<<<<< HEAD
=======
            //color maze wall
>>>>>>> 6602ec65d7fb505d3d753887d81da8a25250ff2d
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
    
    if(d == 'S') {
        if(fp::API::wallFront()) {
            fp::API::setWall(x, y, 's');
            northwall_[x][y] = true;
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