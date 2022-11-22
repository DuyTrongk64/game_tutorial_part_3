#ifndef ENEMY_H
#define ENEMY_H

#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include<iostream>

class Enemy
{
private:
	sf::Sprite sprite;
	sf::Texture texture;
	unsigned pointCount;
	
	int type;
	float speed;
	int hp;
	int hpMax;
	int damage;
	int points;

	void initVariables();
	void initTexture();
	void initSprite(const sf::RenderWindow& window);

public:
	Enemy(const sf::RenderWindow& window);
	virtual ~Enemy();

	//Accessors
	const sf::FloatRect getBounds() const;
	const int& getPoints() const;
	const int& getDamage() const;
	//Modifier
	void setPosition(const sf::Vector2f pos);
	void setPosition(const float x, const float y);

	//Functions
	void update();
	void render(sf::RenderTarget* target);
};

#endif //!ENEMY_H