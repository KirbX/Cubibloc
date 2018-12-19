#ifndef GRID_HPP__
#define GRID_HPP__
#include "Structs.hpp"
class Grid
{
public:

	Coord limits;
	unsigned actualGrid;

	Grid(unsigned width_ =10, unsigned height_ = 24, unsigned depth_ = 3);
	Grid(const Grid&) = delete;
	Grid& operator=(const Grid&) = delete;
	~Grid() = default;

	void changeGrid(DIRECTION direction);
};

#endif //GRID_HPP__