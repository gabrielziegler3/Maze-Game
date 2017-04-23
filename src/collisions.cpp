#include "../inc/collisions.hpp"
#include <ncurses.h>
#include <iostream>

Collisions::Collisions(){

}

Collisions::~Collisions(){}


void Collisions::hitBonus(Player * player, Map * map, Bonus * bonus, int posx, int posy){
    if(map->positionMatrix(player->getPositionY(), player->getPositionX()) == '&'){
        player->setScore(player->getScore() + bonus->getBonusScore());
    }
}

void Collisions::hitTrap(Player * player, Map * map, Trap * trap, Menu * menu, int posx, int posy){
    if(map->positionMatrix(player->getPositionY(), player->getPositionX()) == '#'){
        player->setLife(player->getLife()-trap->getHit());
        if(player->getLife()== 0){
            menu->gameOver(player);
            player->setAlive(false);
        }
    }
}

void Collisions::hitEnd(Player * player, Map * map, Menu * menu, RankingList * ranking, int posx, int posy){
    if(map->positionMatrix(player->getPositionY(), player->getPositionX()) == '8'){
        if(player->getScore() < 0){
            menu->gameOver(player);
        }
        else{
            menu->printWinner(player);
            ranking->writeList(player);
        }
    }
}
