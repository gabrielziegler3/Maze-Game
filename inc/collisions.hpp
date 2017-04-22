#ifndef COLLISIONS_HPP
#define COLLISIONS_HPP
#include "player.hpp"
#include "map.hpp"
#include "menu.hpp"
#include "rankinglist.hpp"
#include <iostream>

using namespace std;

class Collisions {
public:
    Collisions();
    ~Collisions();

    void hitTrap(Player * player, Map* map, Menu * menu, int posx, int posy);
    void hitBonus(Player * player, Map* map, int posx, int posy);
    void hitEnd(Player * player, Map* map, Menu * menu, RankingList * ranking, int posx, int posy);
};
#endif
