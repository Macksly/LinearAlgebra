#pragma once

namespace Main {
	namespace Drawables {
		class Point {
		private:
			int _x;
			int _y;
		public:
			Point(int x, int y);

			int GetX();
			int GetY();
		};
	}
}