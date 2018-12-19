#ifndef STRUCTS_HPP__
#define STRUCTS_HPP__

#include <cstdint>
enum AXE {
	X_AXIS, Y_AXIS, Z_AXIS
};

enum DIRECTION {
	CLOCKWISE = 1/*RIGHT*/, ANTICLOCKWISE = -1/*LEFT*/
};

struct Coord {
public:
	unsigned x, y, z;

	Coord() {}
	Coord(unsigned x_, unsigned y_, unsigned z_) : x{ x_ }, y{ y_ }, z{ z_ } {}
};
struct Color {
public:
	int8_t r, g, b;

	Color() {}
	Color(int8_t r_, int8_t g_, int8_t b_) : r{ r_ }, g{ g_ }, b{ b_ } {}
};

#endif STRUCTS_HPP__
