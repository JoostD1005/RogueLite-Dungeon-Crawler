#pragma once
#include "Player.hpp"
#include "Tilemap.hpp"


namespace Tmpl8 {

class Surface;
class Game
{
public:
	void SetTarget( Surface* surface ) { screen = surface; }
	void Init();
	void Shutdown();
	void Tick( float deltaTime );
	void MouseUp( int button ) { /* implement if you want to detect mouse button presses */ }
	void MouseDown( int button ) { /* implement if you want to detect mouse button presses */ }
	void MouseMove( int x, int y ) { /* implement if you want to detect mouse movement */ }
	void KeyUp( int key ) { /* implement if you want to handle keys */ }
	void KeyDown( int key ) { /* implement if you want to handle keys */ }
private:
	Surface* screen;
	Player player = Player("assets/Player.png", 1);
	Tilemap tilemap;

	Tmpl8::vec2 playerStartingPos = 0;

	Tmpl8::vec2 cameraOffset = { 0, 0 };
	//const Uint8* currentKeyStates = SDL_GetKeyboardState(NULL);
};

}; // namespace Tmpl8