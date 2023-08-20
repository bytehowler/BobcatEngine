#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window/Keyboard.hpp>

class InputManager
{
public:
	InputManager(sf::RenderWindow& window);
	bool isKeyPressed(sf::Keyboard::Key key);

private:
	sf::RenderWindow& m_window;

};