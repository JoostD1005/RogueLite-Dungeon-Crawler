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


	bool yes = true; 
	bool no = false;
	void Game::Tick(float deltaTime)
	{
		if (yes == true && no != true)
		{
			std::cout << "hello world!";
		}
		else
		{
			std::cout << "fuck you!";
		}

		bool af = true;
		
	}
};