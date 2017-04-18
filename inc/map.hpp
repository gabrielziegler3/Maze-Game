#ifndef MAP_HPP
#define MAP_HPP
#include <iostream>

class Map {
private:
    char **matrix;
    int column, row;

public:
    Map();
    // void setMatrix(char ** range);
    char **getMatrix();
    void setMatrix(char **matrix);
    int getColumn();
    void setColumn(int column);
    int getRow();
    void setRow(int row);
    void setPlayer(int posx, int posy);
};
#endif
