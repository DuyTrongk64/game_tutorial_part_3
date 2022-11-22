#include "Enemy.h"

void Enemy::initVariables()
{
	this->pointCount = 5; //min = 3 max = 10
	this->type = 0;
	this->speed = 0.3f;
	this->hpMax = static_cast<int>(this->pointCount);
	this->hp = this->hpMax;
	this->damage = this->pointCount;
	this->points = this->pointCount;
}

void Enemy::initTexture()
{
	//Load a texture from file
	if (!this->texture.loadFromFile("Textures/chicken.png"))
	{
		std::cout << "ERROR::PLAYER::INITTEXTURE::Could not load texture file." << "\n";
	}
}

void Enemy::initSprite(const sf::RenderWindow& window)
{
	//Set the texture to the sprite
	this->sprite.setTexture(this->texture);

	//Resize the sprite
	this->sprite.scale(0.1f, 0.1f);

	this->sprite.setPosition(sf::Vector2f(static_cast<float>(rand() % window.getSize().x - this->sprite.getGlobalBounds().width),0.f));
}



Enemy::Enemy(const sf::RenderWindow& window)
{
	this->initVariables();
	this->initTexture();
	this->initSprite(window);
}

Enemy::~Enemy()
{

}

//Accessors
const sf::FloatRect Enemy::getBounds() const
{
	return this->sprite.getGlobalBounds();
}

const int& Enemy::getPoints() const
{
	return this->points;
}

const int& Enemy::getDamage() const
{
	return this->damage;
}

void Enemy::setPosition(const sf::Vector2f pos)
{
	this->sprite.setPosition(pos);
}

void Enemy::setPosition(const float x, const float y)
{
	this->sprite.setPosition(x, y);
}

//Functions
void Enemy::update()
{
	this->sprite.move(0.f, this->speed);
}

void Enemy::render(sf::RenderTarget* target)
{
	target->draw(this->sprite);
}
