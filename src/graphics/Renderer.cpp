#include "graphics/Renderer.h"

Renderer::Renderer(sf::RenderWindow& window) : m_window(window)
{
}


void Renderer::Draw(sf::Drawable& drawable)
{

}

void Renderer::Display()
{
	m_window.display();
}

void Renderer::Clear()
{
	m_window.clear();
}