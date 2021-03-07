#include "Controller.h"
#include "Textures.h"
#pragma once

Controller::Controller()
	: m_Game_Window(sf::VideoMode(800, 800), "Chess") 
{

}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
void Controller::start_Game(){
	Tile x(sf::Color::Red,sf::Vector2f(100.f, 100.f), sf::Vector2f(0.f, 0.f));
	int z, y;


	std::vector<std::vector<Tool*>>chess_Pieces[2];
	//chess_Pieces[0].resize(5);
	//chess_Pieces[1].resize(5);

	sf::Texture pic;
	sf::Image im;
	im.loadFromFile("pieces.png");
	 
	//pic.loadFromFile("pieces.png");
	
	pic.setSmooth(true);
	//King b(x, pic, sf::Vector2f(0, 0), 0);
	//pic.loadFromImage(im, sf::IntRect(0, 0, 350, 350));
	King a(m_Board.get_Tile(sf::Vector2i(0, 0)), Textures::instance().get_Textures(white,king), 0);
	Queen b(m_Board.get_Tile(sf::Vector2i(1, 0)), Textures::instance().get_Textures(white, queen), 0);
	Bishop c(m_Board.get_Tile(sf::Vector2i(2, 0)), Textures::instance().get_Textures(white, bishop), 0);
	Knight d(m_Board.get_Tile(sf::Vector2i(3, 0)), Textures::instance().get_Textures(white, knight), 0);
	Rook e(m_Board.get_Tile(sf::Vector2i(4, 0)), Textures::instance().get_Textures(white, rook), 0);
	Pawn f(m_Board.get_Tile(sf::Vector2i(5, 0)), Textures::instance().get_Textures(white, pawn), 0);



	King g(m_Board.get_Tile(sf::Vector2i(0, 7)), Textures::instance().get_Textures(black, king), 0);
	Queen h(m_Board.get_Tile(sf::Vector2i(1, 7)), Textures::instance().get_Textures(black, queen), 0);
	Bishop i(m_Board.get_Tile(sf::Vector2i(2, 7)), Textures::instance().get_Textures(black, bishop), 0);
	Knight j(m_Board.get_Tile(sf::Vector2i(3, 7)), Textures::instance().get_Textures(black, knight), 0);
	Rook k(m_Board.get_Tile(sf::Vector2i(4, 7)), Textures::instance().get_Textures(black, rook), 0);
	Pawn l(m_Board.get_Tile(sf::Vector2i(5, 7)), Textures::instance().get_Textures(black, pawn), 0);


	//King b(m_Board.get_Tile(sf::Vector2i(1,1)),pic,0);

	sf::Event event;


	while (m_Game_Window.isOpen()) {
		
		m_Game_Window.clear(sf::Color::Red);
		//x.draw_Tile(m_Game_Window);
		m_Board.draw_Board(m_Game_Window);
		a.draw_Tool(m_Game_Window);
		b.draw_Tool(m_Game_Window);
		c.draw_Tool(m_Game_Window);
		d.draw_Tool(m_Game_Window);
		e.draw_Tool(m_Game_Window);
		f.draw_Tool(m_Game_Window);
		//~~~~~~~~~~~~~~~~//
		g.draw_Tool(m_Game_Window);
		h.draw_Tool(m_Game_Window);
		i.draw_Tool(m_Game_Window);
		j.draw_Tool(m_Game_Window);
		k.draw_Tool(m_Game_Window);
		l.draw_Tool(m_Game_Window);

		m_Game_Window.display();
		while (m_Game_Window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) {
				m_Game_Window.close();
				exit(EXIT_SUCCESS);
			}
		}
		//std::cin >>yo.x>>yo.y;
		//b.set_Pos(yo);
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





