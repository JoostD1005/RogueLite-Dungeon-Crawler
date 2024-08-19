#include "game.h"
#include "surface.h"
#include <cstdio> //printf
#include <iostream>

namespace Tmpl8
{

	void Game::Init()
	{
	}

	void Game::Shutdown()
	{
	}


	void Game::Tick(float deltaTime)
	{
		player.Draw(screen);
	}
};