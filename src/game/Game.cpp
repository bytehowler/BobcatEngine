#include "game/Game.h"

Game::Game() : m_isRunning(true)
{
	m_renderer = std::make_unique<Renderer>(m_window);
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
}

void Game::Update()
{
}

void Game::Render()
{
	m_renderer->Clear();
	m_renderer->Display();
}

bool Game::IsRunning() 
{
    return m_isRunning;
}