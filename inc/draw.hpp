#ifndef DRAW_HPP
#define DRAW_HPP
#include <iostream>
#include "player.hpp"
#include "map.hpp"
#include "trap.hpp"
#include "bonus.hpp"

using namespace std;

class Draw {
private:
public:
    Draw();
    void drawTrap(Trap * trap, Map * map);
    void drawBonus(Bonus * bonus, Map *map);
    void drawTrapRandom(Trap * trap, Map * map);
    void drawBonusRandom(Bonus * bonus, Map *map);
    void drawMap(char **matrix);
    void refreshMap(Map * map, Bonus * bonus, Trap * trap);
};
#endif
