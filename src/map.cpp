#include "../inc/map.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <ncurses.h>

using namespace std;

Map::Map(){

}
int Map::getColumn(){
	return column;
}
void Map::setColumn(int column){
	this->column = column;
}
int Map::getRow(){
	return row;
}
void Map::setRow(int row){
	this->row = row;
}

char Map::positionMatrix(int posx, int posy){
	return rawMatrix[posx][posy];
}

char ** Map::allocRawMatrix(){
	int x,y;
	ifstream map ("doc/stage1.txt");

	setColumn(20);
	setRow(50);

	if(!map){
		std::cout << "Error: Could not find the map file" << '\n';
	}

	rawMatrix = new char*[getRow()];

	for(y = 0; y < getColumn(); y++){
		rawMatrix[y] = new char[getRow()];
			for(x = 0; x < getRow(); x++){
				map >> rawMatrix[y][x];
		}
	}
	map.close();
	return rawMatrix;
}

char ** Map::getRawMatrix(){
	return rawMatrix;
}

void Map::addElement(int posx, int posy, char sprite){
		this->rawMatrix[posx][posy] = sprite;
}
