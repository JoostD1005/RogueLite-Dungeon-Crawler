#include "game.h"
#include "surface.h"
#include <cstdio> //printf
#include <iostream>
#include <SDL.h>

namespace Tmpl8
{

	void Game::Init()
	{
		playerStartingPos = { static_cast<float>( ScreenWidth / 2 - player.GetWidth() / 2 ),static_cast<float>( ScreenHeight / 2 - player.GetHeight() / 2 ) };
		player.SetPosition(playerStartingPos);
	}

	void Game::Shutdown()
	{
	}


	void Game::Tick(float deltaTime)
	{
		screen->Clear(0);

		/*if (currentKeyStates[SDL_SCANCODE_UP]) {
			cameraOffset.y += 5;  // Move the camera down
		}
		if (currentKeyStates[SDL_SCANCODE_DOWN]) {
			cameraOffset.y -= 5;  // Move the camera up
		}
		if (currentKeyStates[SDL_SCANCODE_LEFT]) {
			cameraOffset.x += 5;  // Move the camera right
		}
		if (currentKeyStates[SDL_SCANCODE_RIGHT]) {
			cameraOffset.x -= 5;  // Move the camera left
		}

		if (cameraOffset.y == 10 || cameraOffset.y == -10)
		{
			screen->Clear(0xffffff);
		}

		if (cameraOffset.x == 10 || cameraOffset.x == -10)
		{
			screen->Clear(0xffffff);
		}*/

		player.Draw(screen);

	}
};