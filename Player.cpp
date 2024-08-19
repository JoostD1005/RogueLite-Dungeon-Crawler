#include "Player.hpp"

Player::Player(const char* fileName, unsigned int numFrames) :
	m_pSprite{ new Tmpl8::Sprite(new Tmpl8::Surface(fileName), numFrames) }
{
}

Player::~Player()
{
	delete m_pSprite;
	m_pSprite = nullptr;
}

void Player::Draw(Tmpl8::Surface* screen) const
{
	m_pSprite->Draw(screen, m_Position.x, m_Position.y);
}
