#ifndef COLLISIONS_HPP
#define COLLISIONS_HPP
#include <iostream>

using namespace std;

class Collisions {
public:
    Collisions();
    ~Collisions();

    void hitWall();
    void loseGame();
    void hitTrap();
    void hitBonus();
};
#endif
