#include "Pieces.hpp"
#include <iostream>
int main() {
	Bloc b(0, 0, 0);
	std::vector<Coord> coo;
	coo.push_back(Coord(1, 0, 0));
	coo.push_back(Coord(0, 1, 0));
	Pieces(coo, Color(0,0,0));

	return 0;
}