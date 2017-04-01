#include "../inc/player.hpp"
#include <iostream>

using namespace std;

Player::Player(){

}


Player::Player(bool alive, bool winner, int life, int score){
    setAlive(alive);
    setWinner(winner);
    setLife(life);
    setScore(score);
}

Player::~Player(){}

bool Player::getAlive(){
    return alive;
}
void Player::setAlive(bool alive){
    this->alive = alive;
}
bool Player::getWinner(){
    return winner;
}
void Player::setWinner(bool winner){
    this->winner = winner;
}
int Player::getLife(){
    return life;
}
void Player::setLife(int life){
    this->life = life;
}
int Player::getScore(){
    return score;
}
void Player::setScore(int score){
    this->score = score;
}
int Player::getPositionX(){
    return positionX;
}
void Player::setPositionX(int positionX){
    this-> positionX = positionX;
}
int Player::getPositionY(){
    return positionY;
}
void Player::setPositionY(int positionY){
    this-> positionY = positionY;
}
char Player::getSprite(){
    return sprite;
}
void Player::setSprite(char sprite){
    this->sprite = sprite;
}

void Player::moveUp(){
}
void Player::moveDown(){
}
void Player::moveRight(){
}
void Player::moveLeft(){
}
