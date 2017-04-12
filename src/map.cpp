#include "../inc/map.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <ncurses.h>

int Map::getHeight(){
    return height;
}
void Map::setHeight(int height){
    this-> height = height;
}
int Map::getWidth(){
    return width;
}
void Map::setWidth(int width){
    this-> width = width;
}

void Map::loadStage(){
    initscr();
    raw();
    noecho();

    int x =0, y =0;
    char matrix[x][y];
    
    std::ifstream stage1("doc/stage1.txt");

    if (!stage1) {
        std::cout << "Cannot open file.\n";
        return;
    }

    setWidth(51);
    setHeight(21);

    for (y = 0; y < getHeight(); y++) {
        for (x = 0; x < getWidth(); x++) {
            if(x == '\0'){
                printw("\n");
            }
            else{
                stage1 >> matrix[x][y];
                printw("%c", matrix[x][y]);
            }
        }
    }
    getch();
    endwin();
}
