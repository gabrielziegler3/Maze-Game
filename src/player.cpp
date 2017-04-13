#include "../inc/player.hpp"
#include <iostream>
#include <ncurses.h>

using namespace std;

Player::Player(){
    setSprite('@');
    setLife(3);
    setScore(0);
    setAlive(true);
    setWinner(false);
    setPositionX(1);
    setPositionY(1);
}

Player::Player(bool alive, bool winner, int life, int score, int positionX, int positionY){
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
void Player::setPositionX(int valor){
    this-> positionX += valor;
}
int Player::getPositionY(){
    return positionY;
}
void Player::setPositionY(int valor){
    this-> positionY += valor;
}
char Player::getSprite(){
    return sprite;
}
void Player::setSprite(char sprite){
    this->sprite = sprite;
}

void Player::move(){
    char direction = 'l';

    direction = getch();

    if(direction == 'w'){
		this->setPositionY(-1);
	} else if (direction == 's'){
		this->setPositionY(1);
	} else if (direction == 'a'){
		this->setPositionX(-1);
	} else if (direction == 'd'){
		this->setPositionX(1);
	}
    refresh();
}
