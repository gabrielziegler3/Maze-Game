#ifndef GAMEOBJECT_HPP
#define GAMEOBJECT_HPP
#include <iostream>
#include <string>

//GameObject declarada como classe Abstrata
class GameObject{
protected:
    int positionX;
    int positionY;
    char sprite;
public:
    virtual int getPositionX();
    virtual void setPositionX(int positionX);
    virtual int getPositionY();
    virtual void setPositionY(int positionY);
    virtual char getSprite()=0; //virtual puro => classe abstrata
    virtual void setSprite(char sprite);
};
#endif
