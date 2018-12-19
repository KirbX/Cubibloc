#include "Pieces.hpp"

Pieces::Pieces(std::vector<Coord> relatives_, Color col_) :
	base{ 0,0,0, col_.r, col_.g, col_.b }
{
	for (unsigned i = 0; i < relatives_.size(); ++i) {
		Bloc b(base.position.x + relatives_[i].x, base.position.y + relatives_[i].y, base.position.z + relatives_[i].z,
			col_.r, col_.g, col_.b);
	}

}

void Pieces::rotate(AXE axe, DIRECTION direction)
{
	switch (direction) {
	case CLOCKWISE:
		rotate_(axe);
		break;
	case ANTICLOCKWISE:
		rotate_(axe);
		rotate_(axe);
		rotate_(axe);
	}
}

void Pieces::rotate(AXE axe, DIRECTION direction, Coord limits)
{
}

void Pieces::move(AXE axe, DIRECTION direction)
{
	switch (axe) {
	case X_AXIS:
		base.position.x += direction;
		for (auto& rel : relatives)
			rel.position.x += direction;
		break;
	case Z_AXIS:
		base.position.z += direction;
		for (auto& rel : relatives)
			rel.position.z += direction;
	default:
		break;
	}
}

void Pieces::move(AXE axe, DIRECTION direction, Coord limits)
{
}

void Pieces::step()
{
	base.position.y--;
	for (auto& rel : relatives)
		rel.position.y--;
}

void Pieces::anchor()
{
	base.anchor();
	for (auto& rel : relatives)
		rel.anchor();
}

void Pieces::rotate_(AXE axe)
{
	switch (axe) {
	case X_AXIS:
		for (int i = 0; i < relatives.size(); ++i) {
			int b = relatives[i].position.y - base.position.y;
			int c = relatives[i].position.z - base.position.z;

			relatives[i].position.y = base.position.y - c;
			relatives[i].position.z = base.position.z + b;
		}
		break;
	case Y_AXIS:
		for (int i = 0; i < relatives.size(); ++i) {
			int a = relatives[i].position.x - base.position.x;
			int c = relatives[i].position.z - base.position.z;

			relatives[i].position.x = base.position.x + c;
			relatives[i].position.z = base.position.z - a;
		}
		break;
	case Z_AXIS:
		for (int i = 0; i < relatives.size(); ++i) {
			int a = relatives[i].position.x - base.position.x;
			int b = relatives[i].position.y - base.position.y;

			relatives[i].position.x = base.position.x + b;
			relatives[i].position.y = base.position.y - a;
		}
		break;
	default:
		break;
	}
}
