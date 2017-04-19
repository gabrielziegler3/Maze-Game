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
//
// void Map::setPlayer(int posx, int posy){
// 	matrix[posx][posy] = '@';
// }
void Map::setMatrix(char **matrix){
	this-> matrix = matrix;
}


char ** Map::getMatrix(){
	int x,y;
	ifstream map ("doc/stage1.txt");

	setColumn(20);
	setRow(50);

	if(!map){
		std::cout << "Error: Could not find the map file" << '\n';
	}

	matrix = new char*[getRow()];

	for(x = 0; x < getColumn(); x++){
		matrix[x] = new char[getRow()];
			for(y = 0; y < getRow(); y++){
				map >> matrix[x][y];
		}
	}
	map.close();
	return matrix;
}
// void Map::setMatrix(char matrix[20][50]){
// 	this-> matrix[20][50] = matrix[20][50];
// }

// char Map::getMatrix(){
// 	int x,y;
// 	ifstream map ("doc/stage1.txt");
//
// 	setColumn(20);
// 	setRow(50);
//
// 	if(!map){
// 		std::cout << "Error: Could not find the map file" << '\n';
// 	}
//
// 	for(x = 0; x < getColumn(); x++){
// 		for(y = 0; y < getRow(); y++){
// 				map >> matrix[x][y];
// 		}
// 	}
// 	map.close();
// 	return this->matrix[20][50];
// }

void Map::addElement(int posx, int posy, char sprite){
	this->matrix[posx][posy] = sprite;
}
