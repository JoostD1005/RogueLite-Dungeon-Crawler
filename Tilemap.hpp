#pragma once


#include "surface.h"
#include "template.h"
#include <map>


class Tilemap
{
public:

	void SetCameraOffset(Tmpl8::vec2 offset) { CameraOffset = offset; }


	void Draw(Tmpl8::Surface* screen);


private:
	Tmpl8::vec2 CameraOffset = 0;
	std::map<int, int> map[100][100];
};