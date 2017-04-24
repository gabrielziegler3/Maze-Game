#ifndef MAP_HPP
#define MAP_HPP
#define ROW 20
#define COLUMN 50
#include <iostream>

class Map {
private:
    char **rawMatrix;
    int column, row;
    int stage;

public:
    Map();
    char **getRawMatrix();
    char **allocRawMatrix();
    char positionMatrix(int posx, int posy);
    
    int getColumn();
    void setColumn(int column);
    int getRow();
    void setRow(int row);
    void addElement(int posx, int posy, char sprite);
    void importMap();
    int getStage();
    void setStage(int stage);
};
#endif
