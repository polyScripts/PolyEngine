#pragma once

#include "SDL.h"
#include <iostream>
#include <SDL_image.h>

class Game
{
public:
	Game();
	~Game();

	void init(const char* title, int xpos, int ypos, int width, int heigth, bool fullscreen);

	void handleEvents();
	void update();
	bool running() { return isRunning; }
	void render();
	void clean();

private:
	bool isRunning = false;
	int cnt = 0;
	SDL_Window *window;
	SDL_Renderer *renderer;
};