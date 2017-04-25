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

    outfile << "Name: " << player->getName() << "\tScore: " << player->getScore() << std::endl;

    // outfile.close();
}

void RankingList::readList(){
    char getcontent[100];
    int counter=0;
    std::ifstream f("doc/playerslist.txt");
    erase();
    if (!f){
        printw("Couldn't open ranking list");
    }
    else {
        printw("***********LEGENDARY LIST***********\n");
    }
    while(f >> getcontent)
    {
        counter ++;
        printw("%s \t", getcontent);
        if(counter%4 == 0){
            printw("\n");
        }
    }
    printw("**********GODS AMONGST MEN**********\n");
    f.close();
}
