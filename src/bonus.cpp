#include "../inc/bonus.hpp"
#include <iostream>

Bonus::Bonus(){
    this->sprite = '&';
    this->positionX = 2;
    this->positionY = 3;
    this->bonusScore = 100;
}
Bonus::~Bonus(){}

int Bonus::getBonusScore(){
    return bonusScore;
}
void Bonus::setBonusScore(int bonusScore){
    this->bonusScore = bonusScore;
}
char Bonus::getSprite(){
    return sprite;
}
