#include "Point.h"
using namespace Main;

Drawables::Point::Point(int x, int y) : _x(x), _y(y) {}

int Drawables::Point::GetX()
{
	return _x;
}

int Drawables::Point::GetY()
{
	return _y;
}
