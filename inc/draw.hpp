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
    // void drawPlayer(char **matrix, char sprite, int posx, int posy);
    // void drawPlayer(char sprite, int posx, int posy);
    // void drawPlayer2(char **matrix);
    // void drawPlayer(char matrix[20][50]);
    // void drawPlayer(Player * player, char **range);
    void drawTrap();
    void drawBonus();
    void drawMap(char **matrix);
    // void drawMap(char matrix[20][50]);
};
#endif
