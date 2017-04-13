#ifndef GAMEOBJECT_HPP
#define GAMEOBJECT_HPP
#include <iostream>
#include <string>

//GameObject declarada como classe Virtual
class GameObject{
protected:
    int positionX;
    int positionY;
    char sprite;
    std::string colour;

public:
    //Destrutor virtual puro
    virtual ~GameObject()=0;
    //metodos comuns virtuais para uso de POLIMORFISMO
    virtual int getPositionX();
    virtual void setPositionX(int positionX);
    virtual int getPositionY();
    virtual void setPositionY(int positionY);
    virtual char getSprite();
    virtual void setSprite(char sprite);
    virtual std::string getColour();
    virtual void setColour(std::string colour);

    virtual void move();
};
#endif
