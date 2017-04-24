#include "../inc/rankinglist.hpp"
#include <iostream>
#include <fstream>
#include <ncurses.h>
#include <string>

RankingList::RankingList(){
}
RankingList::~RankingList(){
}

void RankingList::writeList(Player * player){
    std::ofstream outfile;

    outfile.open("doc/playerslist.txt", std::ios_base::app);

    if(!outfile){
        printw("Could not open Ranking file.");
    }

    outfile << "Player name: " << player->getName() << "\t\tScore: " << player->getScore() << std::endl;

    outfile.close();

}

void RankingList::readList(){
    std::string aux;
    std::ifstream list;

    list.open("doc/playerlist.txt");
    char output[100];
    clear();
    if (list.is_open()) {
    while (!list.eof()) {
        list >> output;
        mvprintw(1,1, "%s", output);
        }
   }
   getch();
   list.close();
}
