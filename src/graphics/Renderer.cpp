#include "graphics/Renderer.h"

Renderer::Renderer(sf::RenderWindow& window ) : m_window(window)
{
}


void Renderer::Draw(sf::Drawable& drawable)
{
	m_window.draw(drawable);
}

void Renderer::DrawText(std::string string, int fontSize, sf::Color fontColor)
{
	sf::Font font;
	sf::Text text;

	if (!font.loadFromFile("arial.ttf"))
	{
		// TODO: Make the program shutdown.
	}

	text.setFont(font);
	text.setString(string);
	text.setCharacterSize(fontSize);
	text.setFillColor(fontColor);

	Draw(text);
}

void Renderer::Display()
{
	m_window.display();
}

void Renderer::Clear()
{
	m_window.clear();
}