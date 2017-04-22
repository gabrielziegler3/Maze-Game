#include "../inc/bonus.hpp"
#include "../inc/collisions.hpp"
#include "../inc/draw.hpp"
#include "../inc/gameobject.hpp"
#include "../inc/map.hpp"
#include "../inc/player.hpp"
#include "../inc/trap.hpp"
#include "../inc/menu.hpp"
#include "../inc/rankinglist.hpp"
#include <iostream>
#include <string>
#include <ncurses.h>
#include <fstream>
#include <cstdlib>

int main(int argc, char const *argv[]) {
    bool initialize = false;
    int counter = 0;
    //Sao instanciados objetos de todas classes
    Draw * draw = new Draw();
    Menu * menu = new Menu();
    Map * map = new Map();
    Player * player = new Player('@', TRUE, FALSE, 3, 0, 2, 2, "Ziegler");
    Trap * trap = new Trap[10];
    Bonus * bonus = new Bonus[10];
    Collisions * collision = new Collisions();
    RankingList * ranking = new RankingList();

    char ch=menu->mainMenu();
    		switch(ch) {
    			case 1:
    				break;
    			case 2:
                    clear();
                    cbreak();
                    ranking->readList();
    				break;
                case 3:
                    endwin();
                    system("clear");
                    player->setAlive(false);
                    return(0);
                }
    while(player->getAlive() == true){
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
        map->allocRawMatrix();
        attron(COLOR_PAIR(1));
        printw("Score: [%d]\n", player->getScore());
        printw("Life: [%d]\n\n", player->getLife());
        attroff(COLOR_PAIR(1));
        attron(COLOR_PAIR(2));
        map->addElement(player->getPositionY(), player->getPositionX(), player->getSprite());
        if(initialize == false){
            draw->drawBonusRandom(bonus, map);
            draw->drawTrapRandom(trap, map);
            initialize = true;
        }
        draw->drawBonus(bonus, map);
        draw->drawTrap(trap, map);
        draw->drawMap(map->getRawMatrix());
        player->move(map);
        collision->hitBonus(player, map, player->getPositionY(), player->getPositionX());
        collision->hitTrap(player, map, menu, player->getPositionY(), player->getPositionX());
        collision->hitEnd(player, map, menu, ranking, player->getPositionY(), player->getPositionX());
        refresh();
        // player->setAlive(false);
        attroff(COLOR_PAIR(2));
        if(counter == 5){
            initialize = false;
            counter = 0;
        }
        counter++;
        endwin();
    }

    return 0;
}
