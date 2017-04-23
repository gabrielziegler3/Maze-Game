#include "../inc/trap.hpp"
#include <iostream>

using namespace std;

Trap::Trap(){
    setSprite('#');
    setPositionX(2);
    setPositionY(2);
    setHit(1);
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

int Trap::getHit(){
    return hit;
}
void Trap::setHit(int hit){
    this->hit = hit;
}
