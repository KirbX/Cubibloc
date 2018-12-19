#ifndef PIECES_HPP
#define PIECES_HPP
#include <vector>
#include "Bloc.hpp"
/*
Non copyable PIECES class
Composed with some blocs. 1 bloc is the base, it will be the one moving, the others will be relatives to this one
*/

//Do out of bounds verification here?
//Implies to create rotate(axe, direction, limits) => check if we can rotate without going out of bounds
// and move (axe, direction, limits) => axe Z modulo

class Pieces
{
public:

	Bloc base;
	std::vector<Bloc> relatives;
	Pieces() = delete;
	Pieces(const Pieces&) = delete;
	Pieces& operator=(const Pieces&) = delete;
	//Get a Pieces from a vector of pieces.
	Pieces(int index);
	//Create his own on the fly -> Tests
	Pieces(std::vector<Coord> relatives_, Color col_);
	~Pieces() = default;

	void rotate(AXE axe, DIRECTION direction);
	void rotate(AXE axe, DIRECTION direction, Coord limits);
	void move(AXE axe, DIRECTION direction);
	void move(AXE axe, DIRECTION direction, Coord limits);
	void step();
	void anchor();
private:
	/*
	clockwise rotation. Rotate anticlockwise is 3 clockwise rotation
	This is lazyness of course*/
	void rotate_(AXE axe);

};

#endif //PIECE_HPP