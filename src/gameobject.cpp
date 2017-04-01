#include "../inc/gameobject.hpp"
#include <iostream>

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

char GameObject::getSprite(){
    return sprite;
}
void GameObject::setSprite(char sprite){
    this->sprite=sprite;
}
std::string GameObject::getColour(){
    return colour;
}
void GameObject::setColour(std::string colour){
    this->colour=colour;
}

void GameObject::moveUp(){
}
void GameObject::moveDown(){
}
void GameObject::moveRight(){
}
void GameObject::moveLeft(){
}
