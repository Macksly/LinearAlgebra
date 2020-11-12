#pragma once
#include <SDL_stdinc.h>
namespace Main {
	namespace Models {
		class Color {
		private:
			Uint8 _r;
			Uint8 _g;
			Uint8 _b;
			Uint8 _a;
		public:
			Color(Uint8 _r, Uint8 _g, Uint8 _b, Uint8 _a);

			Uint8 GetR();
			Uint8 GetG();
			Uint8 GetB();
			Uint8 GetA();
		};
	}
}