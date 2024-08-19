#pragma once

#include "surface.h"
#include "template.h"


class Player
{
public:
	Player(const char* fileName, unsigned int numFrames);
	~Player();

	Tmpl8::vec2 GetPosition() { return m_Position; }
	
	void SetPosition(Tmpl8::vec2 position) { m_Position = position; }


	int GetHeight() { return m_pSprite->GetHeight(); }
	int GetWidth() { return m_pSprite->GetWidth(); }

	void Draw(Tmpl8::Surface* screen) const;

private:

	Tmpl8::Sprite* m_pSprite = nullptr;

	Tmpl8::vec2 m_Position = { 350, 200 };
};