#include "Player.h"


void Player::initTexture()
{
	//Load a texture from file
	if(this->texture.loadFromFile("Textures/ship.png"))
	{
		std::cout << "ERROR::PLAYER::INITTEXTURE::Could not load texture file!" << "\n";
	}
}

void Player::initSprite()
{
	//Set the texture to the file
	this->sprite.setTexture(this->texture);
}

Player::Player()
{
	this->initSprite();
	this->initTexture();
}

Player::~Player()
{
}


//Functions
void Player::update()
{

}

void Player::render(sf::RenderTarget& target)
{
	target.draw(this->sprite);
}
