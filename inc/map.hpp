#ifndef MAP_HPP
#define MAP_HPP
#include <iostream>

class Map {
private:
    char **matrix;
    int width, length;

public:
    Map();
    // void setMatrix(char ** range);
    char **getMatrix();
    void setMatrix(char **matrix);
    int getWidth();
    void setWidth(int width);
    int getLength();
    void setLength(int length);
};
#endif
