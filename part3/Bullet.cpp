#include "Bullet.h"

Bullet::Bullet()
{
	
}

Bullet::Bullet(sf::Texture& texture, float dir_x, float dir_y, float movement_speed)
{
	this->shape.setTexture(texture);
	this->diraction.x = dir_x;
	this->diraction.y = dir_y;
	this->movementSpeed = movement_speed;
}

Bullet::~Bullet()
{

}

void Bullet::update()
{
	//Movement
	this->shape.move(this->movementSpeed * this->diraction);
}

void Bullet::render(sf::RenderTarget* target)
{
	target->draw(this->shape);
}
