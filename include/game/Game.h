#pragma once

#include <memory>
#include <SFML/Graphics.hpp>

#include "graphics/Renderer.h"

class Game
{
public:
	Game();

	void Init();
	void Update();
	void Render();
	void ProcessInput();
	void Run();
	bool IsRunning();

private:
	sf::RenderWindow m_window;
	std::unique_ptr<Renderer> m_renderer;
	bool m_isRunning = false;

};