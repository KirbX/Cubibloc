#include "Grid.hpp"

Grid::Grid(unsigned width_, unsigned height_, unsigned depth_) :
	actualGrid{ 0 }
{
	limits.x = width_;
	limits.y = height_;
	limits.z = depth_;
}

void Grid::changeGrid(DIRECTION direction)
{
	switch (direction) {
	case CLOCKWISE:
		if (actualGrid == limits.z - 1)
			actualGrid = 0;
		else
			actualGrid += 1;
		break;

	case ANTICLOCKWISE:
		if (actualGrid == 0)
			actualGrid = limits.z - 1;
		else
			actualGrid -= 1;
		break;
	}
	actualGrid += direction;
}
