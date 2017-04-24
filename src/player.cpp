#include "../inc/player.hpp"
#include <iostream>
#include <ncurses.h>

using namespace std;

Player::Player(){
    setSprite('@');
    setLife(3);
    setScore(0);
    setAlive(true);
    setPositionX(1);
    setPositionY(1);
}

Player::Player(char sprite, bool alive, int life, int score, int positionX, int positionY, std::string name){
    setSprite(sprite);
    setAlive(alive);
    setLife(life);
    setScore(score);
    setPositionX(positionX);
    setPositionY(positionY);
    setName(name);
}

Player::~Player(){}

bool Player::getAlive(){
    return alive;
}
void Player::setAlive(bool alive){
    this->alive = alive;
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
std::string Player::getName(){
    return name;
}
void Player::setName(std::string name){
    this->name = name;
}
char Player::getSprite(){
    return sprite;
}

void Player::move(Map * map){
switch (getch()){
    case 'w':
    case 'W':
    case KEY_UP:
    if(map->positionMatrix(getPositionY()-1, getPositionX()) != '='){
        this->setPositionY(getPositionY()-1);
    }
    break;

    case 's':
    case 'S':
    case KEY_DOWN:
    if(map->positionMatrix(getPositionY()+1, getPositionX()) != '='){
        this->setPositionY(getPositionY()+1);
    }
    break;

    case 'a':
    case 'A':
    case KEY_LEFT:
    if(map->positionMatrix(getPositionY(), getPositionX()-1) != '='){
		this->setPositionX(getPositionX()-1);
    }
    break;

    case 'd':
    case 'D':
    case KEY_RIGHT:
    if(map->positionMatrix(getPositionY(), getPositionX()+1) != '='){
 		this->setPositionX(getPositionX()+1);
    }
    break;

    default:
    break;
    }
}
