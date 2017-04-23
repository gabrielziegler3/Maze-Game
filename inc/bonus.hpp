#ifndef BONUS_HPP
#define BONUS_HPP
#include "gameobject.hpp"
#include <iostream>

class Bonus : public GameObject {
private:
    int bonusScore;
public:
    Bonus();
    ~Bonus();

    int getPositionX();
    void setPositionX(int positionX);
    int getPositionY();
    void setPositionY(int positionY);
    char getSprite();
    void setSprite(char sprite);

    int getBonusScore();
    void setBonusScore(int bonusScore);
};
#endif
