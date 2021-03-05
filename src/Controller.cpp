#include "Controller.h"

#pragma once

Controller::Controller()
	: m_Game_Window(sf::VideoMode(800, 800), "Chess") 
{

}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
void Controller::start_Game(){
	Tile x(sf::Color::Red,sf::Vector2f(100.f, 100.f), sf::Vector2f(0.f, 0.f));
	
	
	std::vector<std::vector<Tool*>>chess_Pieces[2];
	//chess_Pieces[0].resize(5);
	//chess_Pieces[1].resize(5);

	sf::Texture pic;
	sf::Image im;
	im.loadFromFile("pieces.png");
	 
	//pic.loadFromFile("pieces.png");
	
	pic.setSmooth(true);
	//King b(x, pic, sf::Vector2f(0, 0), 0);
	pic.loadFromImage(im, sf::IntRect(0, 0, 350, 350));

	King b(m_Board.get_Tile(sf::Vector2i(0,0)),pic,0);

	sf::Event event;


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
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
void Controller::create_Tool_Pieces() {
	unsigned int piece_Amount_Max = 1/*amount of objects 1 is the minumum */, piece_Amount = 0;

	sf::Texture* pic=new sf::Texture;
	pic->loadFromFile("pieces.png");
	pic->setSmooth(true);
	sf::Color cr[2] = { sf::Color::White,sf::Color::Black };

	//m_Chess_Pieces[i][current_Tool].push_back(King(m_Board.get_Tile(sf::Vector2i(0, 0)),pic,sf::Vector2f() ))





}





