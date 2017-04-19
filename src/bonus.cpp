#include "../inc/bonus.hpp"
#include <iostream>

Bonus::Bonus(){
    setSprite('%');
}
Bonus::~Bonus(){}

int Bonus::getPositionX(){
    return positionX;
}
void Bonus::setPositionX(int positionX){
    this-> positionX = positionX;
}
int Bonus::getPositionY(){
    return positionY;
}
void Bonus::setPositionY(int positionY){
    this-> positionY = positionY;
}
char Bonus::getSprite(){
    return sprite;
}
void Bonus::setSprite(char sprite){
    this->sprite = sprite;
}
void Bonus::move(){
}
