#include "../inc/player.hpp"
#include <iostream>

using namespace std;

Player::Player(){

}

Player::~Player(){}

int Player::getPositionX(){
    return positionX;
}
void Player::setPositionX(){
    this->positionX = positionX;
}
int Player::getPositionY(){
    return positionY;
}
void Player::setPositionY(){
    this->positionY = positionY;
}
