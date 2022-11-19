#pragma once

#include<iostream>
#include<ctime>
#include<vector>
#include<sstream>

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

class Player
{
private:
	sf::Sprite sprite;
	sf::Texture texture;

	//Private functions
	void initTexture();
	void initSprite();
	
public:
	Player();
	virtual ~Player();

	//Functions
	void update();
	void render(sf::RenderTarget& target);
};

