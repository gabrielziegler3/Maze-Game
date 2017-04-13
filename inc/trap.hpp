#ifndef TRAP_HPP
#define TRAP_HPP
#include "gameobject.hpp"
#include <iostream>

class Trap : public GameObject {


public:
    Trap();
    ~Trap();

    int getPositionX();
    void setPositionX(int positionX);
    int getPositionY();
    void setPositionY(int positionY);
    char getSprite();
    void setSprite(char sprite);

    void move();
};
#endif
