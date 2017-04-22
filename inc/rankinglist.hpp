#ifndef RANKINGLIST_HPP
#define RANKINGLIST_HPP
#include "player.hpp"
#include <iostream>
#include <fstream>

class RankingList{


public:
    RankingList();
    ~RankingList();
    void writeList(Player * player);
    void readList();
};

#endif
