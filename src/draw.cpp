#include <iostream>
#include "../inc/draw.hpp"
#include "../inc/map.hpp"
#include "../inc/player.hpp"
#include "../inc/bonus.hpp"
#include "../inc/trap.hpp"
#include <ncurses.h>
#include <cstdlib>
#include <fstream>

Draw::Draw(){}

void Draw::drawTrap(Trap * trap, Map *map){
    for(int i=0; i<10; i++){
        trap[i].setPositionX(rand()%18+1);
        trap[i].setPositionY(rand()%48+1);
        map->addElement(trap[i].getPositionX(), trap[i].getPositionY(), trap[i].getSprite());
    }
}

void Draw::drawBonus(Bonus * bonus, Map *map){
    for(int i=0; i<10;i++){
        bonus[i].setPositionX(rand()%18+1);
        bonus[i].setPositionY(rand()%48+1);
        map->addElement(bonus[i].getPositionX(), bonus[i].getPositionY(), bonus[i].getSprite());
    }
}

void Draw::drawMap(char **matrix){
    for(int i=0; i < 20; ++i){
        for(int j=0; j< 50; ++j){
             printw("%c", matrix[i][j]);
             if(j == 49){
                 printw("\n");
             }
        }
    }
}
