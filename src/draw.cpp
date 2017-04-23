#include "../inc/draw.hpp"
#include "../inc/map.hpp"
#include "../inc/player.hpp"
#include "../inc/bonus.hpp"
#include "../inc/trap.hpp"
#include <iostream>
#include <ncurses.h>
#include <cstdlib>
#include <fstream>

Draw::Draw(){}

void Draw::drawTrapRandom(Trap * trap, Map *map){
    for(int i=0; i<10; i++){
        do{
        trap[i].setPositionX(rand()%19+1);
        trap[i].setPositionY(rand()%49+1);
    }while(map->positionMatrix(trap[i].getPositionX(), trap[i].getPositionY()) == '=' || map->positionMatrix(trap[i].getPositionX(), trap[i].getPositionY()) == '@' || map->positionMatrix(trap[i].getPositionX(), trap[i].getPositionY()) == '8');
        map->addElement(trap[i].getPositionX(), trap[i].getPositionY(), trap[i].getSprite());
    }
}

void Draw::drawBonusRandom(Bonus * bonus, Map *map){
    for(int i=0; i<10;i++){
        do{
        bonus[i].setPositionX(rand()%19+1);
        bonus[i].setPositionY(rand()%49+1);
    }while(map->positionMatrix(bonus[i].getPositionX(), bonus[i].getPositionY()) == '=' || map->positionMatrix(bonus[i].getPositionX(), bonus[i].getPositionY()) == '@' ||map->positionMatrix(bonus[i].getPositionX(), bonus[i].getPositionY()) == '8');
        map->addElement(bonus[i].getPositionX(), bonus[i].getPositionY(), bonus[i].getSprite());
    }
}

void Draw::drawTrap(Trap * trap, Map *map){
    for(int i=0; i<10;i++){
        map->addElement(trap[i].getPositionX(), trap[i].getPositionY(), trap[i].getSprite());
    }
}
void Draw::drawBonus(Bonus * bonus, Map *map){
    for(int i=0; i<10;i++){
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
