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

bool fp::Algorithm::CheckFrontier(std::pair<std::pair<int, int>, char> pos) {
    for(auto i:frontier_) {
        if((i.first.first == pos.first.first) && (i.first.second == pos.first.second) && (i.second == pos.second))
            return true;
    }
    return false;
}

bool fp::Algorithm::CheckSummary(std::pair<std::pair<int, int>, char> pos) {
    for(auto i:summary_) {
        if((i.first.first == pos.first.first) && (i.first.second == pos.first.second) && (i.second == pos.second))
            return true;
    }
    return false;
}

void fp::Algorithm::SolveBFS(std::shared_ptr<fp::LandBasedRobot> robot, fp::Maze& maze) {
    
    fp::API::clearAllColor();
    current_ = {{robot->get_x(), robot->get_y()}, robot->GetDirection()};
    int x = current_.first.first;
    int y = current_.first.second;
    char dir = current_.second;
    maze.MazeUpdate(x, y, dir);
    
    while(fp::Algorithm::CheckGoal(x, y) == false) {
        //std::cerr << current_.first.first << " " << current_.first.second << " " << current_.second << std::endl;
        if(fp::Algorithm::CheckSummary(current_) == false) {
            // If current direction is North
            if(dir == 'N') {
                // Check in the opposite direction i.e. south(down)
                if(maze.get_eastwall(x, y) == true && maze.get_westwall(x, y) == true && maze.get_northwall(x, y) == true) {
                    frontier_.push_back({{x, y-1}, 'S'});
                    parent_.insert({{{x, y-1}, 'S'}, current_});
                }
                // Check in east(right) direction
                if((maze.get_eastwall(x, y) == false) && x < 15 && fp::Algorithm::CheckFrontier({{x+1, y}, 'E'}) == false) { // R
                    frontier_.push_back({{x+1, y}, 'E'});
                    parent_.insert({{{x+1, y}, 'E'}, current_});
                }
                // Check further North(up) direction
                if((maze.get_northwall(x, y) == false) && y < 15 && fp::Algorithm::CheckFrontier({{x, y+1}, 'N'}) == false) { // F
                    frontier_.push_back({{x, y+1}, 'N'});
                    parent_.insert({{{x, y+1}, 'N'}, current_});
                }
                // Check in west(left) direction
                if((maze.get_westwall(x, y) == false) && x > 0 && fp::Algorithm::CheckFrontier({{x-1, y}, 'W'})== false) { // L
                    frontier_.push_back({{x-1, y}, 'W'});
                    parent_.insert({{{x-1, y}, 'W'}, current_});
                }
            }
            // If current direction is west
            if(dir == 'W') {
                // Check in south(down) direction
                if((maze.get_southwall(x, y) == false) && y > 0 && fp::Algorithm::CheckFrontier({{x, y-1}, 'S'})== false) {// L
                    frontier_.push_back({{x, y-1}, 'S'});
                    parent_.insert({{{x, y-1}, 'S'}, current_});
                }
                // Check in the opposite direction i.e. east(right)
                if(maze.get_southwall(x, y) == true && maze.get_westwall(x, y) == true && maze.get_northwall(x, y) == true) {
                    frontier_.push_back({{x+1, y}, 'E'});
                    parent_.insert({{{x+1, y}, 'E'}, current_});
                }
                // Check in north(up) direction
                if((maze.get_northwall(x, y) == false) && y < 15 && fp::Algorithm::CheckFrontier({{x, y+1}, 'N'})== false) { // R
                    frontier_.push_back({{x, y+1}, 'N'});
                    parent_.insert({{{x, y+1}, 'N'}, current_});
                }
                // Check further west(left) direction
                if((maze.get_westwall(x, y) == false) && x > 0 && fp::Algorithm::CheckFrontier({{x-1, y}, 'W'})== false) { // F
                    frontier_.push_back({{x-1, y}, 'W'});
                    parent_.insert({{{x-1, y}, 'W'}, current_});
                }
            }
            // If current direction is East
            if(dir == 'E') {
                // Check in south(down) direction
                if((maze.get_southwall(x, y) == false) && y > 0 && fp::Algorithm::CheckFrontier({{x, y-1}, 'S'})== false) { // R
                    frontier_.push_back({{x, y-1}, 'S'});
                    parent_.insert({{{x, y-1}, 'S'}, current_});
                }
                // Check further east(right) direction
                if((maze.get_eastwall(x, y) == false) && x < 15 && fp::Algorithm::CheckFrontier({{x+1, y}, 'E'})== false) { // F
                    frontier_.push_back({{x+1, y}, 'E'});
                    parent_.insert({{{x+1, y}, 'E'}, current_});
                }
                // Check in north(up) direction
                if((maze.get_northwall(x, y) == false) && y < 15 && fp::Algorithm::CheckFrontier({{x, y+1}, 'N'})== false) { // L
                    frontier_.push_back({{x, y+1}, 'N'});
                    parent_.insert({{{x, y+1}, 'N'}, current_});
                }
                // Check in the opposite direction i.e. west(left)
                if(maze.get_eastwall(x, y) == true && maze.get_southwall(x, y) == true && maze.get_northwall(x, y) == true) {
                    frontier_.push_back({{x-1, y}, 'W'});
                    parent_.insert({{{x-1, y}, 'W'}, current_});
                }
            }
            // If current direction is South
            if(dir == 'S') {
                // Check further south(down)
                if((maze.get_southwall(x, y) == false) && y > 0 && fp::Algorithm::CheckFrontier({{x, y-1}, 'S'})== false) {// F
                    frontier_.push_back({{x, y-1}, 'S'});
                    parent_.insert({{{x, y-1}, 'S'}, current_});
                }
                // Check in east(right) direction
                if((maze.get_eastwall(x, y) == false) && x < 15 && fp::Algorithm::CheckFrontier({{x+1, y}, 'E'})== false) { // L
                    frontier_.push_back({{x+1, y}, 'E'});
                    parent_.insert({{{x+1, y}, 'E'}, current_});
                }
                // Check in the opposite direction i.e. north(up)
                if(maze.get_eastwall(x, y) == true && maze.get_westwall(x, y) == true && maze.get_southwall(x, y) == true) {
                    frontier_.push_back({{x, y+1}, 'N'});
                    parent_.insert({{{x, y+1}, 'N'}, current_});
                }
                // Check in west(left) direction
                if((maze.get_westwall(x, y) == false) && x > 0 && fp::Algorithm::CheckFrontier({{x-1, y}, 'W'})== false) { // R
                    frontier_.push_back({{x-1, y}, 'W'});
                    parent_.insert({{{x-1, y}, 'W'}, current_});
                }
            }
        }
        if(frontier_.size() != 0) {
            summary_.push_back(current_);
            current_ = frontier_[0];
            x = current_.first.first;
            y = current_.first.second;
            dir = current_.second;
            frontier_.erase(frontier_.begin());
        }
    }
    // Back-tracking
    path_.push_back(current_);
    while(path_.back() != summary_[0]) {
        std::cerr << path_.back().first.first << " " << path_.back().first.second << " " << path_.back().second<< std::endl;
        fp::API::setColor(path_.back().first.first, path_.back().first.second,'c');
        path_.push_back(parent_.at(path_.back()));
    }
    std::reverse(path_.begin(), path_.end());
}

bool fp::Algorithm::MoveRobot(std::shared_ptr<fp::LandBasedRobot> robot, fp::Maze& maze) {
    
    int prev_x, prev_y;
    for(unsigned int i = 1; i < path_.size(); i++) {
        std::cerr << "robot " << robot->get_x() << ' ' << robot->get_y() << ' ' << robot->GetDirection() << " Next -> ";
        std::cerr << path_[i].first.first << ' ' << path_[i].first.second << ' ' << path_[i].second << std::endl;
        prev_x = robot->get_x();
        prev_y = robot->get_y();
        if(robot->GetDirection() == 'N' && path_[i].second == 'N' && maze.get_northwall(prev_x, prev_y) == false)
            robot->MoveForward();
        else if(robot->GetDirection() == 'N' && path_[i].second == 'E' && maze.get_eastwall(prev_x, prev_y) == false) {
                robot->TurnRight();
                robot->MoveForward();
        }
        else if(robot->GetDirection() == 'N' && path_[i].second == 'W' && maze.get_westwall(prev_x, prev_y) == false) {
            robot->TurnLeft();
            robot->MoveForward();
        }
        else if(robot->GetDirection() == 'N' && path_[i].second == 'S') {
            robot->TurnRight();
            robot->TurnRight();
            robot->MoveForward();
        }
        else if(robot->GetDirection() == 'E' && path_[i].second == 'E' && maze.get_eastwall(prev_x, prev_y) == false)
                robot->MoveForward();
        else if(robot->GetDirection() == 'E' && path_[i].second == 'N' && maze.get_northwall(prev_x, prev_y) == false) {
                robot->TurnLeft();
                robot->MoveForward();
        }
        else if(robot->GetDirection() == 'E' && path_[i].second == 'S' && maze.get_southwall(prev_x, prev_y) == false) {
                robot->TurnRight();
                robot->MoveForward();
        }
        else if(robot->GetDirection() == 'E' && path_[i].second == 'W') {
            robot->TurnRight();
            robot->TurnRight();
            robot->MoveForward();
        }
        else if(robot->GetDirection() == 'W' && path_[i].second == 'W' && maze.get_westwall(prev_x, prev_y) == false)
            robot->MoveForward();
        else if(robot->GetDirection() == 'W' && path_[i].second == 'S' && maze.get_southwall(prev_x, prev_y) == false) {
            robot->TurnLeft();
            robot->MoveForward();
        }
        else if(robot->GetDirection() == 'W' && path_[i].second == 'N' && maze.get_northwall(prev_x, prev_y) == false) {
            robot->TurnRight();
            robot->MoveForward();
        }
        else if(robot->GetDirection() == 'W' && path_[i].second == 'E') {
            robot->TurnRight();
            robot->TurnRight();
            robot->MoveForward();
        }
        else if(robot->GetDirection() == 'S' && path_[i].second == 'S' && maze.get_southwall(prev_x, prev_y) == false)
            robot->MoveForward();
        else if(robot->GetDirection() == 'S' && path_[i].second == 'W' && maze.get_westwall(prev_x, prev_y) == false) {
            robot->TurnRight();
            robot->MoveForward();
        }
        else if(robot->GetDirection() == 'S' && path_[i].second == 'E' && maze.get_eastwall(prev_x, prev_y) == false) {
            robot->TurnLeft();
            robot->MoveForward();
        }
        else if(robot->GetDirection() == 'S' && path_[i].second == 'N') {
            robot->TurnRight();
            robot->TurnRight();
            robot->MoveForward();
        }
        // If current state is same as the previous state
        // This means that the robot has stuck somewhere in its current path
        if(prev_x == robot->get_x() && prev_y == robot->get_y()) {
            summary_.clear();
            path_.clear();
            frontier_.clear();
            parent_.clear();
            return false;
        }
        else {
            // Update maze as along the movement of the robot
            maze.MazeUpdate(robot->get_x(), robot->get_y(), robot->GetDirection());
            fp::API::clearColor(robot->get_x(),robot->get_y());
			fp::API::setText(robot->get_x(),robot->get_y(),std::string(1,robot->GetDirection()));
        }
    }
    return true;
}