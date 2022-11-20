#ifndef BULLET_H
#define BULLET_H

#include<iostream>
#include<ctime>
#include<vector>
#include<sstream>

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

class Bullet
{
private:

	sf::Sprite  shape;

	sf::Vector2f diraction;
	float movementSpeed;
	//Private functions
public:
	Bullet();
	Bullet(sf::Texture& texture, float dir_x, float dir_y, float movement_speed);
	virtual ~Bullet();

	//Public functions
	void update();
	void render(sf::RenderTarget* target);
};

#endif