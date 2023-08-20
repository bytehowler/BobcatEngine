#include "input/InputManager.h"

InputManager::InputManager(sf::RenderWindow& window) : m_window(window)
{
}

bool InputManager::isKeyPressed(sf::Keyboard::Key key) {
    return sf::Keyboard::isKeyPressed(key);
}