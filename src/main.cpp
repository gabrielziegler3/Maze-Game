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

void killObjects(Draw * draw, Menu * menu, Map * map, Player * player, Trap * trap, Bonus * bonus, Collisions * collision, RankingList * ranking) {
    draw->~Draw();
    menu->~Menu();
    map->~Map();
    player->~Player();
    trap->~Trap();
    bonus->~Bonus();
    collision->~Collisions();
    ranking->~RankingList();
}

int main(int argc, char const *argv[]) {
    int counter = 0;

    //Sao instanciados objetos de todas classes
    Draw * draw = new Draw();
    Menu * menu = new Menu();
    Map * map = new Map();
    Player * player = new Player('@', TRUE, 3, 0, 2, 2, "Unknown Player");
    Trap * trap = new Trap[10];
    Bonus * bonus = new Bonus[10];
    Collisions * collision = new Collisions();
    RankingList * ranking = new RankingList();

    char ch = menu->mainMenu();
    switch(ch) {
        case 0:
            break;
        case 1:
            ranking->readList();
            getch();
            break;
        case 2:
            // system("clear");
            player->setAlive(false);
            endwin();
            break;
    }

    cout << player->getAlive();

    while(player->getAlive()) {
        // iniciacao do game
        initscr(); // switch terminal screen to fullscreen curses mode
        clear();
        start_color();
        init_pair(1, COLOR_WHITE, COLOR_RED);
        init_pair(2, COLOR_BLUE, COLOR_BLACK);
        init_pair(3, COLOR_BLACK, COLOR_CYAN);
        cbreak(); // disable line buffering so that we get raw keystrokes
        keypad(stdscr, TRUE); // enable keypad mode (for arrow and fn keys)
        noecho(); // do not print the user's keystrokes to the screen
        curs_set(0); // make the cursor invisible

        map->allocRawMatrix();
        attron(COLOR_PAIR(3));
        printw("Stage: [%d]\n", map->getStage());
        printw("Score: [%d]\n", player->getScore());
        printw("Life: [%d]\n\n", player->getLife());
        attroff(COLOR_PAIR(3));
        attron(COLOR_PAIR(map->getStage()));

        map->addElement(player->getPositionY(), player->getPositionX(), player->getSprite());

        draw->drawBonus(bonus, map);
        draw->drawTrap(trap, map);
        draw->drawMap(map->getRawMatrix());
        // redraw elements in map
        if(counter % 3)
            draw->refreshMap(map, bonus, trap);

        player->move(map);

        collision->hitBonus(player, map, bonus, player->getPositionY(), player->getPositionX());
        collision->hitTrap(player, map, trap, menu, player->getPositionY(), player->getPositionX());
        collision->hitEnd(player, map, menu, ranking, player->getPositionY(), player->getPositionX());

        refresh();

        attroff(COLOR_PAIR(map->getStage()));
        counter++;

        player->setScore(player->getScore() - 10); // Every move, player loses 10 points
        endwin();
    }
    killObjects(draw, menu, map, player, trap, bonus, collision, ranking);

    return 0;
}
