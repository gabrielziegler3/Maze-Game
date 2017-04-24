#include "../inc/bonus.hpp"
#include <iostream>

Bonus::Bonus(){
    setSprite('&');
    setPositionX(2);
    setPositionY(3);
    setBonusScore(100);
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
