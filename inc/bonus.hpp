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
    int getBonusScore();
    void setBonusScore(int bonusScore);
    char getSprite();
};
#endif
