#pragma once

#include "surface.h"
#include "template.h"


class Player
{
public:
	Player(const char* fileName, unsigned int numFrames);
	~Player();

	void Draw(Tmpl8::Surface* screen) const;

private:

	Tmpl8::Sprite* m_pSprite = nullptr;

	Tmpl8::vec2 m_Position = { 350, 200 };
};