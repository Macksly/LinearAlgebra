#include "Rect.h"

Main::Models::Rect::Rect(const int x, const int y, SDL_Rect* rect) : _x(x), _y(y), _rect(rect) {}

int Main::Models::Rect::GetX()
{
	return _x;
}

int Main::Models::Rect::GetY()
{
	return _y;
}

SDL_Rect* Main::Models::Rect::GetRect()
{
	return _rect;
}
