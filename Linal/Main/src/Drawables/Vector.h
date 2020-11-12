#pragma once
#include "../Models/Color.h"
#include "Point.h"

namespace Main {
	namespace Drawables {
		class Vector {
		private:
			Point* _point1;
			Point* _point2;
			int _deltaX;
			int _deltaY;
			Models::Color _color;

		public:
			Vector(Point* point1, Point* point2, Models::Color color);

			Point* GetPoint1();
			Point* GetPoint2();
			int GetDeltaX();
			int GetDeltaY();
			Models::Color GetColor();
		};
	}
}