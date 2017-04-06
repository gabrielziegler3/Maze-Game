#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "gameobject.hpp"
#include <iostream>

class Player : public GameObject{
private:
    bool alive;
    bool winner;
    int life;
    int score;

public:
    //Exemplo de SOBRECARGA de construtor
    Player();
    Player(bool alive, bool winner, int life, int score, int positionX, int positionY);
    ~Player();

    //Exemplo de SOBRESCRITA de metodo da CLASSE ABSTRATA
    int getPositionX();
    void setPositionX(int positionX);
    int getPositionY();
    void setPositionY(int positionY);
    char getSprite();
    void setSprite(char sprite);

    void moveUp();
    void moveDown();
    void moveRight();
    void moveLeft();

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
