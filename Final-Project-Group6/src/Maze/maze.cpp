#include "maze.h"


//initializing wall matrix
fp::Maze::Maze()
{
    for(int i = 0; i < 16; i++) {
        for(int j = 0; j < 16; j++) {
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
void fp::Maze::MazeUpdate(int x, int y, char d) {
    
    if(d == 'N') {
        if(fp::API::wallFront()) {
            fp::API::setWall(x, y, 'n');
            northwall_[x][y] = true;
            //color maze wall
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