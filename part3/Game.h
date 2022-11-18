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

class Game
{
private:
	sf::RenderWindow* window;

	//Private functions
	void initWindow();
public:
	Game();
	virtual ~Game();

	//Functions

	void run();

	void update();
	void render();
};

