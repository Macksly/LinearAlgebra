#pragma once
#include "../Models/Window.h"
#include "../Models/CoordinateMap.h"
#include "../Drawables/Point.h"
#include "../Drawables/Vector.h"

namespace Main {
	namespace Controllers {
		class MainController {
		private:
			const int SCREEN_WIDTH = 720;
			const int SCREEN_HEIGHT = 720;
			Models::Window* _window;
			
		public:
			MainController();
			void Init();
			void Line(std::vector<Models::Rect*> rectangles);
			Drawables::Point* CreatePoint(std::vector<Models::Rect*> rectangles, int x, int y);
		};
	}
}