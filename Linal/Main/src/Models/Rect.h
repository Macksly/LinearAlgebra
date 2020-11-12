#pragma once
#include <SDL.h>

namespace Main {
	namespace Models {
		class Rect {
		private:
			int _x;
			int _y;

			SDL_Rect* _rect;
		public:
			Rect(const int x, const int y, SDL_Rect* rect);

			int GetX();
			int GetY();
			SDL_Rect* GetRect();
		};
	}
}