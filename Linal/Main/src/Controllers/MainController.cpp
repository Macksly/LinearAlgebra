#include "MainController.h"
#include "SDL.h";
#include "VectorCalculator.h"

using namespace Main;

Controllers::MainController::MainController() : _window(nullptr) {}

void Main::Controllers::MainController::Init()
{
	_window = new Models::Window();

	if (_window->Init(SCREEN_WIDTH, SCREEN_HEIGHT)) {
		Models::CoordinateMap map = {};

		map.CreateMap(SCREEN_WIDTH, SCREEN_HEIGHT);

		_window->ClearWindow();
		_window->Draw(map.GetCoordinateMap());

		Line(map.GetCoordinateMap());

		_window->Render();

		SDL_Delay(50000);
	}
}

void Main::Controllers::MainController::Line(std::vector<Models::Rect*> rectangles)
{
	Drawables::Vector* vector1 = new Drawables::Vector(
		CreatePoint(rectangles, -2, 2),
		CreatePoint(rectangles, 2, -2),
		Models::Color{ 0x99, 0x0, 0x0, 0x1 }
	);

	Drawables::Vector* vector2 = new Drawables::Vector(
		CreatePoint(rectangles, 2, -2),
		CreatePoint(rectangles, 3, -5),
		Models::Color{ 0x99, 0x0, 0x0, 0x1 }
	);

	_window->DrawVector(vector2);

	VectorCalculator calculator = {};
	_window->DrawVector(calculator.Subtract(vector1, vector2));
	_window->DrawVector(vector1);
}

Drawables::Point* Controllers::MainController::CreatePoint(std::vector<Models::Rect*> rectangles, int x, int y)
{
	for (Models::Rect* r : rectangles) {
		if (r->GetX() == x && r->GetY() == y) {
			return new Drawables::Point(r->GetRect()->x, r->GetRect()->y);
		}
	}
}


