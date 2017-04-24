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

int Trap::getHit(){
    return hit;
}
void Trap::setHit(int hit){
    this->hit = hit;
}
char Trap::getSprite(){
    return sprite;
}
