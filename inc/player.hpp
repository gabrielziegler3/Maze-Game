#ifndef PLAYER_HPP
#define PLAYER_HPP
#include <iostream>

class Player{
private:
    int positionX, positionY;

public:
    Player();
    ~Player();

    int getPositionX();
    void setPositionX();
    int getPositionY();
    void setPositionY();

};
#endif
