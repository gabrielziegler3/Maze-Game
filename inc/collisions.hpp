#ifndef COLLISIONS_HPP
#define COLLISIONS_HPP
#include "player.hpp"
#include "map.hpp"
#include "menu.hpp"
#include <iostream>

using namespace std;

class Collisions {
public:
    Collisions();
    ~Collisions();

    void hitWallUp(Player * player, int posx, int posy);
    void hitWallDown(Player * player, int posx, int posy);
    void hitWallLeft(Player * player, int posx, int posy);
    void hitWallRight(Player * player, int posx, int posy);
    void hitTrap(Player * player, Menu * menu, int posx, int posy);
    void hitBonus(Player * player, int posx, int posy);
    void hitEnd(Player * player, Menu * menu, int posx, int posy);
};
#endif
