#ifndef MAP_HPP
#define MAP_HPP
#include <iostream>

class Map {
private:
    char **matrix;
    int column, row;
    // char matrix[20][50];

public:
    Map();
    char **getMatrix();
    void setMatrix(char **matrix);
    // char getMatrix();
    // void setMatrix(char matrix[20][50]);
    int getColumn();
    void setColumn(int column);
    int getRow();
    void setRow(int row);
    void setPlayer(int posx, int posy);
    void addElement(int posx, int posy, char sprite);
};
#endif
