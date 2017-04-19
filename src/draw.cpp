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

void Draw::drawTrap(){
}

void Draw::drawBonus(){

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
// void Draw::drawMap(char matrix[20][50]){
//     for(int i=0; i < 20; ++i){
//         for(int j=0; j< 50; ++j){
//              printw("%c", matrix[i][j]);
//              if(j == 49){
//                  printw("\n");
//              }
//         }
//     }
// }

void Draw::drawPlayer(char **matrix, char sprite, int posx, int posy){
    matrix[posx][posy] = sprite;
    // refresh();
}
// void Draw::drawPlayer(char **matrix, char sprite, int posx, int posy){
//     matrix[posx][posy] = sprite;
// }
// void Draw::drawPlayer(char **matrix, int posx, int posy){
//     matrix[posx][posy] = sprite;
// }
//
// void Draw::drawPlayer(char sprite, int posx, int posy){
//     map->addElement(1,1,'@');
// }

//
// void Draw::drawPlayer2(char **matrix){
//     matrix[1][1] = '@';
// }


// void Draw::drawPlayer(Player * player, char **range){
//     range[1][1] = '@';
// }
//

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
