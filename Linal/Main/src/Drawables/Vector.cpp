#include "Vector.h"
using namespace Main;

Main::Drawables::Vector::Vector(Point* point1, Point* point2, Models::Color color) : _point1(point1), _point2(point2), _color(color) 
{
	_deltaX = point2->GetX() - point1->GetX();
	_deltaY = point2->GetY() - point1->GetY();
}

Drawables::Point* Drawables::Vector::GetPoint1()
{
	return _point1;
}

Drawables::Point* Drawables::Vector::GetPoint2()
{
	return _point2;
}

int Main::Drawables::Vector::GetDeltaX()
{
	return _deltaX;
}

int Main::Drawables::Vector::GetDeltaY()
{
	return _deltaY;
}

Models::Color Drawables::Vector::GetColor()
{
	return _color;
}