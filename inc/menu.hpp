#ifndef MENU_HPP
#define MENU_HPP
#include "player.hpp"
#include <iostream>
#include <ncurses.h>

using namespace std;

class Menu {

public:
    // void mainMenu();
    int mainMenu();
    void gameOver(Player * player);
    void printDragon();
    void printText();
};
#endif
