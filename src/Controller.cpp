#include "Controller.h"
#pragma once

Controller::Controller()
	: m_Game_Window(sf::VideoMode(800, 800), "Chess") 
{

}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
void Controller::start_Game(){
	//Tile x(sf::Color::Red,sf::Vector2f(100.f, 100.f), sf::Vector2f(1.f, 100.f));
	sf::Event event;

	while (m_Game_Window.isOpen()) {
		
		m_Game_Window.clear(sf::Color::Red);
		//x.draw_Tile(m_Game_Window);
		m_Board.draw_Board(m_Game_Window);
		m_Game_Window.display();
		while (m_Game_Window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) {
				m_Game_Window.close();
				exit(EXIT_SUCCESS);
			}
		}
	}
}







