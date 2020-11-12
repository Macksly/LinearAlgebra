#pragma once
#include "../Drawables/Vector.h"

namespace Main {
	namespace Controllers {
		class VectorCalculator {
		public:
			Drawables::Vector* Add(Drawables::Vector* vector1, Drawables::Vector* vector2);
			Drawables::Vector* Subtract(Drawables::Vector* vector1, Drawables::Vector* vector2);
			Drawables::Vector* Multiply(Drawables::Vector* vector1, int scalair);

		};
	}
}