#include "../inc/gameobject.hpp"
#include <iostream>

GameObject::GameObject(){}
GameObject::~GameObject(){}

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
