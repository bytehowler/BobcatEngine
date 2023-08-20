#include <ctime>
#include <string>

#include "game/Game.h"

Game::Game() : m_isRunning(true)
{
	m_renderer = std::make_unique<Renderer>(m_window);
	m_inputMgr = std::make_unique<InputManager>(m_window);
	m_playerEntity = std::make_unique<Entity>(m_window);
}



void Game::Init()
{
	m_window.create(sf::VideoMode(800, 600), "Bobcat Engine");
}

void Game::Run()
{
	while (IsRunning()) {
		sf::Event event;

		while (m_window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				m_isRunning = false;
				continue;
			}
		}

		ProcessInput();
		Update();
		Render();
	}
}

void Game::ProcessInput()
{
	if (m_inputMgr->isKeyPressed(sf::Keyboard::A))
	{
		m_playerEntity->Move(-1, 0);
	} 
	else if (m_inputMgr->isKeyPressed(sf::Keyboard::W))
	{
		m_playerEntity->Move(0, -1);
	}
	else if (m_inputMgr->isKeyPressed(sf::Keyboard::D))
	{
		m_playerEntity->Move(1, 0);
	}
	else if (m_inputMgr->isKeyPressed(sf::Keyboard::S))
	{
		m_playerEntity->Move(0, 1);
	}
}

void Game::Update()
{
}

void Game::Render()
{
	std::time_t t = std::time(0);
	

	m_renderer->Clear();

	m_renderer->Draw(m_playerEntity->GetSprite());

	m_renderer->DrawText(std::to_string(t));
	m_renderer->Display();
}

bool Game::IsRunning() 
{
    return m_isRunning;
}