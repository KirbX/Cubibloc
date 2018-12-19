#ifndef BLOC_HPP__
#define BLOC_HPP__

#include "Structs.hpp"
/*
Non copyable BLOC class
Simple bloc, the base of the game
*/


class Bloc
{

public:
	/*
	
	Y
	|  Z
	| /
	|/____X
	
	*/

	//Position
	Coord position;
	//Color
	Color color;
	//State, 
	bool anchored;


	Bloc() = delete;
	Bloc(const Bloc&) = delete;
	Bloc& operator=(const Bloc&) = delete;
	Bloc(unsigned x_, unsigned y_, unsigned z_, int8_t r_ = 0, int8_t g_ = 0, int8_t b_ = 0, bool anchored_ = false);

	~Bloc() = default;

	void anchor();

};

#endif//BLOC_HPP__
