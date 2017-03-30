#ifndef GAMEOBJECT_HPP
#define GAMEOBJECT_HPP

class GameObject{
private:
    int positionX;
    int positionY;
public:
    GameObject();
    ~GameObject();
    int getPositionX();
    void setPositionX(int positionX);
    int getPositionY();
    void setPositionY(int positionY);
};
#endif
