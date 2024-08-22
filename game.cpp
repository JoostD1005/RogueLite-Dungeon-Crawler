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

		if (isWDown)
			cameraOffset.y -= 5;
		if (isSDown)
			cameraOffset.y += 5;
		if (isADown)
			cameraOffset.x -= 5;
		if (isDDown)
			cameraOffset.x += 5;


		tilemap.Draw(screen);
		player.Draw(screen);
	}


















	void Game::GameOverScreen(float deltaTime)
	{
		screen->Clear(0);
	
	}


	void Game::KeyUp(int key)
	{

		switch (key)
		{
		case SDL_SCANCODE_W:
			isWDown = false;
			break;
		case SDL_SCANCODE_A:
			isADown = false;
			break;
		case SDL_SCANCODE_S:
			isSDown = false;
			break;
		case SDL_SCANCODE_D:
			isDDown = false;
			break;
		}
	}


	void Game::KeyDown(int key)
	{

		switch (key)
		{
		case SDL_SCANCODE_W:
			isWDown = true;
			break;
		case SDL_SCANCODE_A:
			isADown = true;
			break;
		case SDL_SCANCODE_S:
			isSDown = true;
			break;
		case SDL_SCANCODE_D:
			isDDown = true;
			break;
		}
	}
};