#pragma once

#include <SFML/Graphics.hpp>

class Renderer
{
public:
	Renderer(sf::RenderWindow& window);

	void Draw(sf::Drawable& drawable);
	void Display();
	void Clear();

private:
	sf::RenderWindow& m_window;

};