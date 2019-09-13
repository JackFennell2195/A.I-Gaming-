#ifndef GAME_HPP
#define GAME_HPP
/// <summary>
/// include guards used so we don't process this file twice
/// same as #pragma once
/// Don't forget the endif at the bottom
/// </summary>
#include <SFML/Graphics.hpp>

class Game
{
public:
	Game();
	~Game();
	/// <summary>
	/// main method for game
	/// </summary>
	void run();

private:

	void processEvents();
	void processKeys(sf::Event t_event);
	void update(sf::Time t_deltaTime);
	void render();
	
	
	void setupSprites();

	sf::RenderWindow m_window; // main SFML window
	sf::Texture m_playerTexture1; // texture used for Player 1
	sf::Sprite m_playerSprite1; // sprite used for Player 1
	sf::Texture m_playerTexture2;
	sf::Sprite m_playerSprite2;
	bool m_exitGame; // control exiting game

};

#endif // !GAME_HPP

