#ifndef MAP_HPP
#define MAP_HPP
#include <iostream>

class Map {
private:
    int height, width;

public:
    int getHeight();
    void setHeight(int height);
    int getWidth();
    void setWidth(int width);

    void loadStage();
};
#endif
