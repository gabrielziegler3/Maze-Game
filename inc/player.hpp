#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "gameobject.hpp"
#include "map.hpp"
#include <iostream>
#include <string>

class Player : public GameObject{
private:
    bool alive;
    int life;
    int score;
    std::string name;

public:
    //Exemplo de SOBRECARGA de construtor
    Player();
    Player(char sprite, bool alive, int life, int score, int positionX, int positionY, std::string name);
    ~Player();
    std::string getName();
    void setName(std::string name);
    bool getAlive();
    void setAlive(bool alive);
    int getLife();
    void setLife(int life);
    int getScore();
    void setScore(int score);
    void move(Map * map);
    char getSprite();
};
#endif
