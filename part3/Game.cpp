#include "Game.h"

//Private functions
void Game::initWindow()
{
	this->window = new sf::RenderWindow(sf::VideoMode(800, 600), "Gamne 3", sf::Style::Close | sf::Style::Titlebar);
}

Game::Game()
{
	this->initWindow();
}

Game::~Game()
{
}

//Functions
void Game::run()
{
	while(this->window->isOpen())
	{
		this->update();
		this->render();
	}
}

void Game::update()
{
}

void Game::render()
{
	this->window->clear();

	//Draw all stuffs

	this->window->display();
}
