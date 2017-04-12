#include <iostream>
#include "../inc/draw.hpp"
#include <ncurses.h>
#include <cstdlib>
#include <fstream>

Draw::Draw(){}

void Draw::drawPlayer(){
}
void Draw::drawTrap(){
}
void Draw::drawBonus(){
}
void Draw::drawMap(){
    initscr();
    clear();
    keypad(stdscr, TRUE);
    noecho();
    int x =0, y =0;
    char matrix[x][y];

    std::ifstream stage1("doc/stage1.txt");

    if (!stage1) {
        std::cout << "Cannot open file.\n";
        return;
    }

    for (y = 0; y < 21; y++) {
        for (x = 0; x < 51; x++) {
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
// void Draw::drawMap(){
//     int i=0, j=0;
//     char mapa[i][j];
// 	for(int i = 0; i < 20; i++){
// 		for(int j = 0; j < 50; j++){
//             stage1 >> mapa[i][j];
// 	 		printw("%c", this->mapa[i][j]);
// 	 		if(j >= 49){
// 	 			printw("\n");
// 	 		}
// 		}
// 	}
//     getch();
// }
