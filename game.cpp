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
		switch (state)
		{
		case State::start:
			StartScreen(deltaTime);
			break;
		case State::game:
			GameScreen(deltaTime);
			break;
		case State::gameOver:
			GameOverScreen(deltaTime);
			break;
		}

	}

	void Game::StartScreen(float deltaTime)
	{
		screen->Clear(0);
	}

	void Game::GameScreen(float deltaTime)
	{
		screen->Clear(0);
		tilemap.Draw(screen);
		player.Draw(screen);
	}

	void Game::GameOverScreen(float deltaTime)
	{
		screen->Clear(0);
	
	}
};