#ifndef TRAP_HPP
#define TRAP_HPP
#include "gameobject.hpp"
#include <iostream>

class Trap : public GameObject {

private:
    int hit;

public:
    Trap();
    ~Trap();
    int getHit();
    void setHit(int hit);
    char getSprite();
};
#endif
