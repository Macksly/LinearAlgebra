#include "Window.h"
#include <iostream>
#include <SDL_ttf.h>
using namespace Main;

Models::Window::Window() : _window(nullptr), _renderer(nullptr), _width(0), _height(0) {}

bool Models::Window::Init(const int width, const int height)
{
    _width = width;
    _height = height;

    //The window we'll be rendering to
    _window = NULL;

    //The surface contained by the window
    SDL_Surface* screenSurface = NULL;

    //Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        std::cout << "SDL could not initialize! SDL_Error: %s\n" << SDL_GetError() << std::endl;
        return false;
    }
    else
    {
        //Create window
        _window = SDL_CreateWindow("Linallekes Macksly", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_SHOWN);
        
        if (_window == NULL)
        {
            std::cout << "Window could not be created! SDL_Error: %s\n" << SDL_GetError() << std::endl;
            return false;
        }

        //Create renderer for window
        _renderer = SDL_CreateRenderer(_window, -1, SDL_RENDERER_ACCELERATED);
        if (_renderer == NULL)
        {
            std::cout << "Renderer could not be created! SDL Error: %s\n" << SDL_GetError();
            return false;
        }
    }

    return true;
}

void Models::Window::Destroy()
{
    //Destroy window
    SDL_DestroyWindow(_window);
    _window = NULL;

    //Destroy renderer
    SDL_DestroyRenderer(_renderer);
    _renderer = NULL;

    //Quit SDL subsystems
    SDL_Quit();
}

void Main::Models::Window::ClearWindow()
{
    SDL_RenderClear(_renderer);
}

void Main::Models::Window::Render()
{
    SDL_RenderPresent(_renderer);
}

void Models::Window::Draw(std::vector<Models::Rect*> rectangles)
{
    SDL_SetRenderDrawColor(_renderer, 0xFF, 0xFF, 0xFF, 0xFF);
    SDL_Rect back = { 0,0,720,720 };
    
    SDL_RenderFillRect(_renderer, &back);
    
    for (Models::Rect* r : rectangles) {
        SDL_SetRenderDrawColor(_renderer, 0x00, 0x00, 0x00, 0x00);
        SDL_RenderDrawRect(_renderer, r->GetRect());
    }

    SDL_SetRenderDrawColor(_renderer, 0x00, 0xFF, 0x00, 0xFF);

    SDL_RenderDrawLine(_renderer, 0, _height /2, _width, _height /2);
    SDL_RenderDrawLine(_renderer, _width /2, 0, _width / 2, _height);
}

void Main::Models::Window::DrawVector(Drawables::Vector* vector)
{
    SDL_SetRenderDrawColor(_renderer, vector->GetColor().GetR(), vector->GetColor().GetG(), vector->GetColor().GetB(), vector->GetColor().GetA());
    SDL_RenderDrawLine(_renderer, vector->GetPoint1()->GetX(), vector->GetPoint1()->GetY(), vector->GetPoint2()->GetX(), vector->GetPoint2()->GetY());
}


