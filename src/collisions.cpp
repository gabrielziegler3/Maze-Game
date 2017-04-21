#include "../inc/collisions.hpp"
#include "../inc/player.hpp"
#include <ncurses.h>
#include <iostream>

Collisions::Collisions(){

}

Collisions::~Collisions(){}

void Collisions::hitWallUp(Player * player, int posx, int posy){
    if(posx && posy == '='){
        return;
    }
}

void Collisions::hitWallDown(Player * player, int posx, int posy){
    if(posx && posy == '='){
        return;
    }
}

void Collisions::hitWallLeft(Player * player, int posx, int posy){
    if(posx && posy == '='){
        return;
    }
}

void Collisions::hitWallRight(Player * player, int posx, int posy){
    if(posx && posy == '='){
        return;
    }
}

void Collisions::hitBonus(Player * player, int posx, int posy){
    if(posx && posy == '&'){
        player->setScore(player->getScore()+100);

    }
}

void Collisions::hitTrap(Player * player, Menu * menu, int posx, int posy){
    if(posx && posy == '#'){
        player->setLife(player->getLife()-1);
        if(player->getLife()== 0){
            menu->gameOver(player);
            player->setAlive(false);
        }
    }
}

void Collisions::hitEnd(Player * player, Menu * menu, int posx, int posy){

}
