#include "CoordinateMap.h"
using namespace Main;

Models::CoordinateMap::CoordinateMap()
{
	TTF_Init();
	_rectangles = { std::vector<Rect*>() };
	_font = TTF_OpenFont("arial.ttf", 6);
}

void Models::CoordinateMap::CreateMap(const int width, const int height)
{
	int rect_width = width / (BOUNDARY * 2);
	int rect_height = height / (BOUNDARY * 2);

	int xPosScreen = 0;
	int yPosScreen = 0;
	int xPos = -10;
	int yPos = 10;

	while ((rect_width + xPosScreen) <= width) {
		SDL_Rect* rect = new SDL_Rect{ xPosScreen, yPosScreen, rect_width, rect_height };
		
		_rectangles.push_back(new Rect{xPos,yPos, rect});

		while ((rect_height + yPosScreen) <= height) {
			yPosScreen += rect_height;
			yPos--;
			SDL_Rect* rect = new SDL_Rect{ xPosScreen, yPosScreen, rect_width, rect_height };
			
			_rectangles.push_back(new Rect{ xPos,yPos, rect});

		}

		xPos++;
		yPos = 10;
		yPosScreen = 0;
		xPosScreen += rect_width;
	}
}


std::vector<Models::Rect*> Models::CoordinateMap::GetCoordinateMap()
{
	return _rectangles;
}
