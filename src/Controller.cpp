#include "Controller.h"

#pragma once

Controller::Controller()
	: m_Game_Window(sf::VideoMode(800, 800), "Chess") 
{

}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
void Controller::start_Game(){
	Tile x(sf::Color::Red,sf::Vector2f(100.f, 100.f), sf::Vector2f(0.f, 0.f));
	
	sf::Event event;
	sf::Texture pic;
	//pic = new sf::Texture;
	pic.loadFromFile("pieces.png");
	//*pic->getSize
	//Tool 
	//King b(x, pic, sf::Vector2f(0, 0),0);
	std::vector<std::vector<Tool*>>chess_Pieces[2];
	chess_Pieces[0].resize(5);
	chess_Pieces[1].resize(5);
	



	while (m_Game_Window.isOpen()) {
		
		m_Game_Window.clear(sf::Color::Red);
		//x.draw_Tile(m_Game_Window);
		m_Board.draw_Board(m_Game_Window);
		b.draw_Tool(m_Game_Window);
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







