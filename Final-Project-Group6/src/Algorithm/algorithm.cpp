#include "algorithm.h"

bool fp::Algorithm::CheckGoal(int x, int y) {
    if(x == 7 && y == 7)
        return true;
    if(x == 7 && y == 8)
        return true;
    if(x == 8 && y == 7)
        return true;
    if(x == 8 && y == 8)
        return true;
    return false;
}

//boolean function for whether or not next position & direction has been 
//i = next direction
//pos = direction
bool fp::Algorithm::CheckFrontier(std::pair<std::pair<int, int>, char> pos) {
    for(auto i:frontier_) {
        if((i.first.first == pos.first.first) && (i.first.second == pos.first.second))
            return true;
    }
    return false;
}

bool fp::Algorithm::CheckSummary(std::pair<std::pair<int, int>, char> pos) {
    for(auto i:summary_) {
        if((i.first.first == pos.first.first) && (i.first.second == pos.first.second))
            return true;
    }
    return false;
}

void fp::Algorithm::SolveDFS(fp::LandBasedWheeled robot, fp::Maze maze) {
    
    current_ = {{robot.get_x(), robot.get_y()}, robot.GetDirection()};
    int x = current_.first.first;
    int y = current_.first.second;
    char dir = current_.second;
    maze.MazeUpdate(x, y, dir);
    
    while(fp::Algorithm::CheckGoal(x, y) == false) {
        //std::cerr << current_.first.first << " " << current_.first.second << " " << current_.second << std::endl;
        if(fp::Algorithm::CheckSummary(current_) == false) {
            if(dir == 'N') {
                if((maze.get_northwall(x, y) == false) && y < 15 && fp::Algorithm::CheckFrontier({{x, y+1}, 'N'}) == false) { // F
                    maze.MazeUpdate(robot.get_x(),robot.get_y(),'N');
                    
                    frontier_.push_back({{x, y+1}, 'N'});
                    parent_.insert({{{x, y+1}, 'N'}, current_});
                    
                    std::cerr << "Forward Move " << robot.get_x() << " " << robot.get_y() << std::endl;
                    robot.MoveForward();
                    
                    SolveDFS(robot, maze);
                }
                if((maze.get_eastwall(x, y) == false) && x < 15 && fp::Algorithm::CheckFrontier({{x+1, y}, 'E'}) == false) { // R
                    maze.MazeUpdate(robot.get_x(),robot.get_y(),'N');
                    std::cerr << "Turning Right" << std::endl;
                    robot.TurnRight();
                    
                    frontier_.push_back({{x+1, y}, 'E'});
                    parent_.insert({{{x+1, y}, 'E'}, current_});

                    SolveDFS(robot, maze);
                }
                if((maze.get_westwall(x, y) == false) && x > 0 && fp::Algorithm::CheckFrontier({{x-1, y}, 'W'})== false) { // L
                    maze.MazeUpdate(robot.get_x(),robot.get_y(),'N');
                    
                    frontier_.push_back({{x-1, y}, 'W'});
                    parent_.insert({{{x-1, y}, 'W'}, current_});

                    std::cerr << "Turning Left" << std::endl;
                    robot.TurnLeft();
                    
                    SolveDFS(robot, maze);
                }
            }
        
            if(dir == 'W') {
                if((maze.get_westwall(x, y) == false) && x > 0 && fp::Algorithm::CheckFrontier({{x+1, y}, 'W'})== false) { // F
                    maze.MazeUpdate(robot.get_x(),robot.get_y(),'W');
                    
                    frontier_.push_back({{x+1, y}, 'W'});
                    parent_.insert({{{x+1, y}, 'W'}, current_});
                    std::cerr << "Forward Move " << robot.get_x() << " " << robot.get_y() << std::endl;
                    
                    robot.MoveForward();
                    
                    SolveDFS(robot, maze);
                }
                if((maze.get_northwall(x, y) == false) && y < 15 && fp::Algorithm::CheckFrontier({{x, y+1}, 'N'})== false) { // R
                    maze.MazeUpdate(robot.get_x(),robot.get_y(),'W');                   
                    
                    frontier_.push_back({{x, y+1}, 'N'});
                    parent_.insert({{{x, y+1}, 'N'}, current_});


                    std::cerr << "Turning Right" << std::endl;
                    robot.TurnRight();
                    
                    SolveDFS(robot, maze);
                }
                if((maze.get_southwall(x, y) == false) && y > 0 && fp::Algorithm::CheckFrontier({{x, y-1}, 'S'})== false) {// L
                    maze.MazeUpdate(robot.get_x(),robot.get_y(),'W');
         
                    frontier_.push_back({{x, y-1}, 'S'});
                    parent_.insert({{{x, y-1}, 'S'}, current_});


                    std::cerr << "Turning Left" << std::endl;
                    robot.TurnLeft();
                    
                    SolveDFS(robot, maze);
            }
            }
            if(dir == 'E') {
                if((maze.get_eastwall(x, y) == false) && x < 15 && fp::Algorithm::CheckFrontier({{x-1, y}, 'E'})== false) { // F
                    maze.MazeUpdate(robot.get_x(),robot.get_y(),'E');
                    
                    frontier_.push_back({{x-1, y}, 'E'});
                    parent_.insert({{{x-1, y}, 'E'}, current_});
                    std::cerr << "Forward Move " << robot.get_x() << " " << robot.get_y() << std::endl;
                    
                    robot.MoveForward();
                    
                    SolveDFS(robot, maze);
                }
                if((maze.get_southwall(x, y) == false) && y > 0 && fp::Algorithm::CheckFrontier({{x, y-1}, 'S'})== false) { // R
                    maze.MazeUpdate(robot.get_x(),robot.get_y(),'E');
                    
                    frontier_.push_back({{x, y-1}, 'S'});
                    parent_.insert({{{x, y-1}, 'S'}, current_});

                    
                    std::cerr << "Turning Right" << std::endl;
                    robot.TurnRight();
                    
                    SolveDFS(robot, maze);

                }
                if((maze.get_northwall(x, y) == false) && y < 15 && fp::Algorithm::CheckFrontier({{x, y+1}, 'N'})== false) { // L
                    maze.MazeUpdate(robot.get_x(),robot.get_y(),'E');
                    
                    frontier_.push_back({{x, y+1}, 'N'});
                    parent_.insert({{{x, y+1}, 'N'}, current_});
                  
                    
                    std::cerr << "Turning Left" << std::endl;
                    robot.TurnLeft();
                    
                    SolveDFS(robot, maze);

            }
            }
        
            if(dir == 'S') {
                if((maze.get_southwall(x, y) == false) && y > 0 && fp::Algorithm::CheckFrontier({{x, y-1}, 'S'})== false) {// F
                    maze.MazeUpdate(robot.get_x(),robot.get_y(),'S');
                    
                    frontier_.push_back({{x, y-1}, 'S'});
                    parent_.insert({{{x, y-1}, 'S'}, current_});
                    std::cerr << "Forward Move " << robot.get_x() << " " << robot.get_y() << std::endl;
                    
                    robot.MoveForward();
                    
                    SolveDFS(robot, maze);
                }
                if((maze.get_westwall(x, y) == false) && x > 0 && fp::Algorithm::CheckFrontier({{x-1, y}, 'W'})== false) { // R
                    maze.MazeUpdate(robot.get_x(),robot.get_y(),'S');
                    
                    frontier_.push_back({{x-1, y}, 'W'});
                    parent_.insert({{{x-1, y}, 'W'}, current_});

                    
                    std::cerr << "Turning Right" << std::endl;
                    robot.TurnRight();
                    
                    SolveDFS(robot, maze);
                }
                if((maze.get_eastwall(x, y) == false) && x < 15 && fp::Algorithm::CheckFrontier({{x+1, y}, 'E'})== false) { // L
                    maze.MazeUpdate(robot.get_x(),robot.get_y(),'S');
                    
                    frontier_.push_back({{x+1, y}, 'E'});
                    parent_.insert({{{x+1, y}, 'E'}, current_});

                    std::cerr << "Turning Left" << std::endl;
                    robot.TurnLeft();
                    
                    SolveDFS(robot, maze);
                }
            }
        }
        if(frontier_.size() != 0) {
            summary_.push_back(current_);
            current_ = frontier_.back();
            x = current_.first.first;
            y = current_.first.second;
            dir = current_.second;
            frontier_.pop_back();
        }
    }
    path_.push_back(current_);
    while(path_.back() != summary_[0]) {
        std::cerr << path_.back().first.first << " " << path_.back().first.second << " " << path_.back().second<< std::endl;
        path_.push_back(parent_.at(path_.back()));
    }
    path_.push_back(summary_[0]);
}

