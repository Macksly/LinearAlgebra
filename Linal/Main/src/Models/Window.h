#pragma once
#include <SDL.h>
#include <vector>
#include "Rect.h"
#include "../Drawables/Vector.h"

namespace Main {
	namespace Models {
		class Window {
		private:
			int _width;
			int _height;
			SDL_Window* _window;
			SDL_Renderer* _renderer;

		public:
			Window();
			bool Init(const int width, const int height);
			void Destroy();
			void ClearWindow();
			void Render();
			void Draw(std::vector<Models::Rect*> rectangles);
			void DrawVector(Drawables::Vector* line);
		};
	}
}