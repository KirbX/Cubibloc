#include "Bloc.hpp"

Bloc::Bloc(unsigned x_, unsigned y_, unsigned z_, int8_t r_, int8_t g_, int8_t b_, bool anchored_) : 
	anchored{ anchored_ }
{
	position.x = x_;
	position.y = y_;
	position.z = z_;
	color.r = r_;
	color.g = g_;
	color.b = b_;
}

void Bloc::anchor()
{
	anchored = true;
}
