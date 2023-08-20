#include "entities/Entity.h"


Entity::Entity(sf::RenderWindow& window) : m_window(window)
{
	m_sprite = std::make_unique<sf::RectangleShape>(sf::Vector2f(10.0f, 10.0f));
}

void Entity::Move(int x, int y)
{
	if (!(m_xPosition + x > m_window.getSize().x) 
	&& !(m_yPosition + y > m_window.getSize().y))
	{
		m_sprite->setPosition(m_xPosition += x, m_yPosition += y);
	}
}

sf::Drawable& Entity::GetSprite()
{
	return *m_sprite;
}
