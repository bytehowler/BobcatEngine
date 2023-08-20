#pragma once

#include <SFML/Graphics.hpp>

class Game
{
public:
	Game();
	~Game();

	void Init();
	void Update();
	void Render();
	void ProcessInput();
	void Run();
	bool IsRunning();

private:
	sf::RenderWindow m_window;
	bool m_isRunning = false;

};