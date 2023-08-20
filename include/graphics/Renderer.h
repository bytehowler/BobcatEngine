#pragma once

#include <SFML/Graphics.hpp>

class Renderer
{
public:
	Renderer(sf::RenderWindow& window);

	void Draw(sf::Drawable& drawable);
	void DrawText(std::string string, int fontSize = 12,
		sf::Color fontColor = sf::Color::White);
	void Display();
	void Clear();

private:
	sf::RenderWindow& m_window;

};