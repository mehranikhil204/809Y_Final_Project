#include "api.h"
#include <cstdlib>
#include <iostream>

int fp::API::mazeWidth() {
    std::cout << "mazeWidth" << std::endl;
    std::string response;
    std::cin >> response;
    return atoi(response.c_str());
}

int fp::API::mazeHeight() {
    std::cout << "mazeHeight" << std::endl;
    std::string response;
    std::cin >> response;
    return atoi(response.c_str());
}

bool fp::API::wallFront() {
    std::cout << "wallFront" << std::endl;
    std::string response;
    std::cin >> response;
    return response == "true";
}

bool fp::API::wallRight() {
    std::cout << "wallRight" << std::endl;
    std::string response;
    std::cin >> response;
    return response == "true";
}

bool fp::API::wallLeft() {
    std::cout << "wallLeft" << std::endl;
    std::string response;
    std::cin >> response;
    return response == "true";
}

void fp::API::moveForward() {
    std::cout << "moveForward" << std::endl;
    std::string response;
    std::cin >> response;
    if (response != "ack") {
        std::cerr << response << std::endl;
        throw;
    }
}

void fp::API::turnRight() {
    std::cout << "turnRight" << std::endl;
    std::string ack;
    std::cin >> ack;
}

void fp::API::turnLeft() {
    std::cout << "turnLeft" << std::endl;
    std::string ack;
    std::cin >> ack;
}

void fp::API::setWall(int x, int y, char direction) {
    std::cout << "setWall " << x << " " << y << " " << direction << std::endl;
}

void fp::API::clearWall(int x, int y, char direction) {
    std::cout << "clearWall " << x << " " << y << " " << direction << std::endl;
}

void fp::API::setColor(int x, int y, char color) {
    std::cout << "setColor " << x << " " << y << " " << color << std::endl;
}

void fp::API::ColorPoints(){
	setColor(0, 0, 'w');
	setText(0,0,"Start");
	setColor(7, 7, 'w');
	setText(7,7,"Goal");
	setColor(7, 8, 'w');
	setText(7,8,"Goal");
	setColor(8, 7, 'w');
	setText(8,7,"Goal");
	setColor(8, 8, 'w');
	setText(8,8,"Goal");	
}

void fp::API::clearColor(int x, int y) {
    std::cout << "clearColor " << x << " " << y << std::endl;
}

void fp::API::clearAllColor() {
std::cout << "clearAllColor" << std::endl;
}

void fp::API::setText(int x, int y, const std::string& text) {
std::cout << "setText " << x << " " << y << " " << text << std::endl;
}

void fp::API::clearText(int x, int y) {
std::cout << "clearText " << x << " " << y << std::endl;
}

void fp::API::clearAllText() {
std::cout << "clearAllText" << std::endl;
}

bool fp::API::wasReset() {
std::cout << "wasReset" << std::endl;
std::string response;
std::cin >> response;
return response == "true";
}

void fp::API::ackReset() {
    std::cout << "ackReset" << std::endl;
    std::string ack;
    std::cin >> ack;
}

