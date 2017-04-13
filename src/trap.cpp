#include "../inc/trap.hpp"
#include <iostream>

using namespace std;

Trap::Trap(){
    setSprite('#');
}

Trap::~Trap(){}

int Trap::getPositionX(){
    return positionX;
}
void Trap::setPositionX(int positionX){
    this-> positionX = positionX;
}
int Trap::getPositionY(){
    return positionY;
}
void Trap::setPositionY(int positionY){
    this-> positionY = positionY;
}
char Trap::getSprite(){
    return sprite;
}
void Trap::setSprite(char sprite){
    this->sprite = sprite;
}

void Trap::move(){
}
