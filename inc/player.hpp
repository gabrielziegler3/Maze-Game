#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "gameobject.hpp"
#include "map.hpp"
#include <iostream>
#include <string>

class Player : public GameObject{
private:
    bool alive;
    bool winner;
    int life;
    int score;
    std::string name;

public:
    //Exemplo de SOBRECARGA de construtor
    Player();
    Player(char sprite, bool alive, bool winner, int life, int score, int positionX, int positionY, std::string name);
    ~Player();

    //Exemplo de SOBRESCRITA de metodo da CLASSE ABSTRATA
    int getPositionX();
    void setPositionX(int positionX);
    int getPositionY();
    void setPositionY(int positionY);
    char getSprite();
    void setSprite(char sprite);
    std::string getName();
    void setName(std::string name);

    void move(Map * map);

    bool getAlive();
    void setAlive(bool alive);
    bool getWinner();
    void setWinner(bool winner);
    int getLife();
    void setLife(int life);
    int getScore();
    void setScore(int score);

};
#endif
