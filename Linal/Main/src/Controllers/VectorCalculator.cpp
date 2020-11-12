#include "VectorCalculator.h"
using namespace Main;

Drawables::Vector* Main::Controllers::VectorCalculator::Add(Drawables::Vector* vector1, Drawables::Vector* vector2)
{
    int newDeltaX = vector1->GetDeltaX() + vector2->GetDeltaX();
    int newDeltaY = vector1->GetDeltaY() + vector2->GetDeltaY();
    
    int x1 = vector1->GetPoint1()->GetX();
    int y1 = vector1->GetPoint1()->GetY();

    int x2 = x1 + newDeltaX;
    int y2 = y1 + newDeltaY;

    return new Drawables::Vector{
        new Drawables::Point{x1, y1},
        new Drawables::Point{x2, y2},
        Models::Color{0x99, 0x0, 0x0, 0x1}
    };
}

Drawables::Vector* Main::Controllers::VectorCalculator::Subtract(Drawables::Vector* vector1, Drawables::Vector* vector2)
{
    int newDeltaX = vector1->GetDeltaX() - (-1 * vector2->GetDeltaX());
    int newDeltaY = vector1->GetDeltaY() - (-1 * vector2->GetDeltaY());

    int x1 = vector1->GetPoint1()->GetX();
    int y1 = vector1->GetPoint1()->GetY();

    int x2 = x1 + newDeltaX;
    int y2 = y1 + newDeltaY;

    return new Drawables::Vector{
        new Drawables::Point{x1, y1},
        new Drawables::Point{x2, y2},
        Models::Color{0x99, 0x0, 0x0, 0x1}
    };
}

Drawables::Vector* Main::Controllers::VectorCalculator::Multiply(Drawables::Vector* vector1, int scalair)
{
    int newDeltaX = vector1->GetDeltaX() * scalair;
    int newDeltaY = vector1->GetDeltaY() * scalair;

    int x1 = vector1->GetPoint1()->GetX();
    int y1 = vector1->GetPoint1()->GetY();

    int x2 = vector1->GetPoint1()->GetX() + newDeltaX;
    int y2 = vector1->GetPoint1()->GetY() + newDeltaY;

    return new Drawables::Vector{
        new Drawables::Point{x1, y1},
        new Drawables::Point{x2, y2},
        Models::Color{ 0x42, 0x6F, 0x42, 0x1}
    };
}
