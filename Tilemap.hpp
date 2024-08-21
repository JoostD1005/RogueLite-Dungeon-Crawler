#pragma once


#include "surface.h"
#include "template.h"
#include <map>


class Tilemap
{
public:

	void SetCameraOffset(Tmpl8::vec2 offset) { cameraOffset = offset; }
	void TileOffset();

	void Draw(Tmpl8::Surface* screen);


private:
	Tmpl8::vec2 cameraOffset = 0;
	
	Tmpl8::Surface tiles = Tmpl8::Surface("assets/testTile.png");

	char map[11][48] = {
		"aa ab aa ab aa ab ab aa ab aa ab aa ab aa ab aa",
		"ab aa ab aa ab ab aa ab aa ab aa ab aa ab aa ab",
		"aa ab aa ab aa ab ab aa ab aa ab aa ab aa ab aa",
		"ab aa ab aa ab ab aa ab aa ab aa ab aa ab aa ab",
		"aa ab aa ab aa ab ab aa ab aa ab aa ab aa ab aa",
		"ab aa ab aa ab ab aa ab aa ab aa ab aa ab aa ab",
		"aa ab aa ab aa ab ab aa ab aa ab aa ab aa ab aa",
		"ab aa ab aa ab ab aa ab aa ab aa ab aa ab aa ab",
		"aa ab aa ab aa ab ab aa ab aa ab aa ab aa ab aa",
		"ab aa ab aa ab ab aa ab aa ab aa ab aa ab aa ab",
		"aa ab aa ab aa ab aa ab aa ab ab ab aa ab aa ab"
		
	};
};