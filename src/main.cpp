#include "../inc/bonus.hpp"
#include "../inc/collisions.hpp"
#include "../inc/draw.hpp"
#include "../inc/gameobject.hpp"
#include "../inc/map.hpp"
#include "../inc/player.hpp"
#include "../inc/trap.hpp"
#include "../inc/menu.hpp"
#include <iostream>
#include <string>
#include <ncurses.h>
#include <fstream>
#include <cstdlib>
#include <stdio_ext.h>

int main(int argc, char const *argv[]) {
    //Sao instanciados objetos de todas classes necessarias
    Draw * draw = new Draw();
    Menu * menu = new Menu();
    Map * map = new Map();
    Player * player = new Player('@', TRUE, FALSE, 3, 0, 2, 2);
    // Trap * trap = new Trap();
    // Bonus * bonus = new Bonus();

    menu->mainMenu();
    // map->setPlayer(1,1);

    //iniciacao do game
    while(player->getLife() > 0){
        clear();
        initscr(); // switch terminal screen to fullscreen curses mode
        cbreak(); // disable line buffering so that we get raw keystrokes
        keypad(stdscr, TRUE); // enable keypad mode (for arrow and fn keys)
        noecho(); // do not print the user's keystrokes to the screen
        curs_set(0); // make the cursor invisible
        // map->addElement(1,1,'@');
        draw->drawMap(map->getMatrix());
        draw->drawPlayer(map->getMatrix(), player->getPositionX(), player->getPositionY(),player->getSprite());
        // draw->drawPlayer(map->getRange(), player->getSprite(), player->getPositionX(), player->getPositionY());
        std::cout << "\nLife: [" << player->getLife() << "]" << '\n';
        // player->setLife(0);
        refresh();
        getch();
        endwin();
    }

    delete(menu);
    delete(player);
    delete(map);
    delete(draw);
    // delete(bonus);
    // delete(trap);
    // delete[] map->getMatrix();
    return 0;
}
