#include "../inc/map.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <ncurses.h>

using namespace std;

Map::Map(){

}

int Map::getWidth(){
	return width;
}
void Map::setWidth(int width){
	this->width = width;
}
int Map::getLength(){
	return length;
}
void Map::setLength(int length){
	this->length = length;
}

void Map::setMatrix(char **matrix){
	ifstream map ("doc/stage1.txt");

	string aux;
	matrix = new char*[20];

	for(int i = 0; i < 20; i++){
		getline(map, aux);
		matrix[i] = new char[50];
		for(int u = 0; u < 50; u++){
			matrix[i][u] = aux[u];
		}
	}
	map.close();
}

char ** Map::getMatrix(){
	int x,y;
	string aux;
	ifstream map ("doc/stage1.txt");

	setWidth(50);
	setLength(50);

	if(!map){
		std::cout << "Error: Could not find the map file" << '\n';
	}

	matrix = new char*[getWidth()];

	for(x = 0; x < getWidth(); x++){
		matrix[x] = new char[getLength()];
	}
	for(x = 0; x < getWidth(); x++){
		for(y = 0; y < getLength(); y++){
			map >> matrix[x][y];
		}
	}
	map.close();
	return matrix;
}
