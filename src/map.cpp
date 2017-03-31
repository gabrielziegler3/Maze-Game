#include "../inc/map.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

char matrix[19][49];

void Map::loadMap() {
  int x, y;
  system("clear");
  ifstream in("../obj/mapa1.txt");

  if (!in) {
    cout << "Cannot open file.\n";
    return;
  }

  for (y = 0; y < 49; y++) {
    for (x = 0; x < 19; x++) {
      in >> matrix[x][y];
      std::cout << matrix[x][y];
    }
  }
}
