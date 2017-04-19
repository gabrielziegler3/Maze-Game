#include <iostream>
#include <string>
#include <fstream>

void registerList(std::string name, int score){
    std::ifstream list ("doc/playerlist.txt");

    if(!list){
        std::cout << "List file not found" << '\n';
        return;
    }
}
