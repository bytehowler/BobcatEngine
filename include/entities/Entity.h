#pragma once

#include <memory>
#include <SFML/Graphics.hpp>

class Entity
{
public:
	Entity(sf::RenderWindow& window);

	void Move(int x = 0, int y = 0);
	sf::Drawable& GetSprite();

private:
	int m_xPosition, m_yPosition;
	std::unique_ptr<sf::RectangleShape> m_sprite;

	sf::RenderWindow& m_window;

};