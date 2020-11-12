#pragma once
#include <vector>
#include <SDL.h>
#include <SDL_ttf.h>
#include "Rect.h"

namespace Main {
	namespace Models {
		class CoordinateMap {
		private:
			const static int BOUNDARY = 10;
			std::vector<Rect*> _rectangles;
			TTF_Font* _font;

		public:
			CoordinateMap();
			void CreateMap(const int width, const int height);
			void CreatePoints();
			std::vector<Rect*> GetCoordinateMap();
		};
	}
}