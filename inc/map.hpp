#ifndef MAP_HPP
#define MAP_HPP
#define ROW 20
#define COLUMN 50
#include <iostream>

class Map {
private:
    char **matrix;
    int column, row;

public:
    Map();
    char **getMatrix();
    char **allocMatrix();
    void setMatrix(char **matrix);

    int getColumn();
    void setColumn(int column);
    int getRow();
    void setRow(int row);
    void setPlayer(int posx, int posy);
    void addElement(int posx, int posy, char sprite);
    void importMap();
};
#endif
