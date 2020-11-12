#include "Color.h"

Main::Models::Color::Color(Uint8 r, Uint8 g, Uint8 b, Uint8 a) : _r(r), _g(g), _b(b), _a(a) {}

Uint8 Main::Models::Color::GetR()
{
	return _r;
}

Uint8 Main::Models::Color::GetG()
{
	return _g;
}

Uint8 Main::Models::Color::GetB()
{
	return _b;
}

Uint8 Main::Models::Color::GetA()
{
	return _a;
}
