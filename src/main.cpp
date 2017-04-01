#include "../inc/bonus.hpp"
#include "../inc/collisions.hpp"
#include "../inc/draw.hpp"
#include "../inc/gameobject.hpp"
#include "../inc/map.hpp"
#include "../inc/player.hpp"
#include "../inc/trap.hpp"
#include <iostream>
#include <string>
#include <ncurses.h>
#include <fstream>
#include <cstdlib>


//g++ bonus.cpp collisions.cpp draw.cpp gameobject.cpp main.cpp map.cpp player.cpp trap.cpp  -o saida
using namespace std;

int main(int argc, char const *argv[]) {

    Map * map = new Map();
    Player * player = new Player(true, false, 3, 0);


    map->loadMap();
    while(player->getLife() > 0){
        map->loadMap();
        std::cout << "\n\nLife: " << player->getLife() << '\n';
        player->setLife(0);
    }

    delete(player);

    return 0;
}
