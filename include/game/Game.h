#pragma once

#include <memory>
#include <SFML/Graphics.hpp>

#include "graphics/Renderer.h"
#include "input/InputManager.h"

#include "entities/Entity.h"

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
	std::unique_ptr<InputManager> m_inputMgr;
	std::unique_ptr<Entity> m_playerEntity;

	bool m_isRunning = false;

};