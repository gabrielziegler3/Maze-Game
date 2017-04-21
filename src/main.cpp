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

int main(int argc, char const *argv[]) {
    //Sao instanciados objetos de todas classes
    Draw * draw = new Draw();
    Menu * menu = new Menu();
    Map * map = new Map();
    Player * player = new Player('@', TRUE, FALSE, 3, 0, 2, 2);
    Trap * trap = new Trap[10];
    Bonus * bonus = new Bonus[10];
    Collisions * collision = new Collisions();

    char ch=menu->mainMenu();
    		switch(ch) {
    			case 1:
    				break;
    			case 2:
    				break;
                case 3:
                    endwin();
                    clear();
                    system("clear");
                    break;
                }
    while(player->getAlive() == TRUE){
        // iniciacao do game
        clear();
        initscr(); // switch terminal screen to fullscreen curses mode
        start_color();
        init_pair(1, COLOR_BLACK, COLOR_CYAN);
        init_pair(2, COLOR_WHITE, COLOR_GREEN);
        cbreak(); // disable line buffering so that we get raw keystrokes
        keypad(stdscr, TRUE); // enable keypad mode (for arrow and fn keys)
        noecho(); // do not print the user's keystrokes to the screen
        curs_set(0); // make the cursor invisible
        attron(COLOR_PAIR(1));
        printw("Score: [%d]\n", player->getScore());
        printw("Life: [%d]\n\n", player->getLife());
        attroff(COLOR_PAIR(1));
        attron(COLOR_PAIR(2));
        map->allocMatrix();
        map->addElement(player->getPositionX(), player->getPositionY(), player->getSprite());
        draw->drawBonus(bonus, map);
        draw->drawTrap(trap, map);
        draw->drawMap(map->getMatrix());
        player->move();
        collision->hitBonus(player, player->getPositionX(), player->getPositionY());
        collision->hitTrap(player, menu, player->getPositionX(), player->getPositionY());
        // map->addElement(player->getPositionX(), player->getPositionY(), '-');
        if(player->getLife()==0){
            menu->gameOver(player);
            player->setAlive(false);
        }
        refresh();
        endwin();
    }

    return 0;
}
