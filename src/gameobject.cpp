#include "../inc/gameobject.hpp"
#include <iostream>

int GameObject::getPositionX(){
    return positionX;
}
void GameObject::setPositionX(int positionX){
    this->positionX = positionX;
}
int GameObject::getPositionY(){
    return positionY;
}
void GameObject::setPositionY(int positionY){
    this->positionY = positionY;
}
char GameObject::getSprite(){
    return sprite;
}
void GameObject::setSprite(char sprite){
    this->sprite=sprite;
}
