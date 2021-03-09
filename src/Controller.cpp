#include "Controller.h"
#include "Textures.h"
#pragma once

Controller::Controller()
	: m_Game_Window(sf::VideoMode(800, 800), "Chess") 
{
	create_Tool_Pieces();
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
void Controller::start_Game(){
	Tile x(sf::Color::Red,sf::Vector2f(100.f, 100.f), sf::Vector2f(0.f, 0.f));
	int z, y;
	sf::Event event;
	while (m_Game_Window.isOpen()) {
		
		m_Game_Window.clear(sf::Color::Red);
		//x.draw_Tile(m_Game_Window);
		m_Board.draw_Board(m_Game_Window);
		draw_All_Tools();
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


	m_Chess_Pieces[0].resize(different_Tools);
	m_Chess_Pieces[1].resize(different_Tools);
	//~~~~~~~~~~~~~~~~~~~~ white pieces
	m_Chess_Pieces[0][king].push_back(new King(m_Board.get_Tile(sf::Vector2i(4, 7)),
		Textures::instance().get_Textures(white, king), white));

	m_Chess_Pieces[0][queen].push_back(new Queen(m_Board.get_Tile(sf::Vector2i(3, 7)),
		Textures::instance().get_Textures(white, queen), white));

	m_Chess_Pieces[0][bishop].push_back(new Bishop(m_Board.get_Tile(sf::Vector2i(2, 7)),
		Textures::instance().get_Textures(white, bishop), white));

	m_Chess_Pieces[0][bishop].push_back(new Bishop(m_Board.get_Tile(sf::Vector2i(5, 7)),
		Textures::instance().get_Textures(white, bishop), white));

	m_Chess_Pieces[0][knight].push_back(new Knight(m_Board.get_Tile(sf::Vector2i(1, 7)),
		Textures::instance().get_Textures(white, knight), white));

	m_Chess_Pieces[0][knight].push_back(new Knight(m_Board.get_Tile(sf::Vector2i(6, 7)),
		Textures::instance().get_Textures(white, knight), white));

	m_Chess_Pieces[0][rook].push_back(new Rook(m_Board.get_Tile(sf::Vector2i(0, 7)),
		Textures::instance().get_Textures(white, rook), white));

	m_Chess_Pieces[0][rook].push_back(new Rook(m_Board.get_Tile(sf::Vector2i(7, 7)),
		Textures::instance().get_Textures(white, rook), white));

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//

	m_Chess_Pieces[1][king].push_back(new King(m_Board.get_Tile(sf::Vector2i(4, 0)),
		Textures::instance().get_Textures(black, king), black));

	m_Chess_Pieces[1][queen].push_back(new Queen(m_Board.get_Tile(sf::Vector2i(3, 0)),
		Textures::instance().get_Textures(black, queen), black));

	m_Chess_Pieces[1][bishop].push_back(new Bishop(m_Board.get_Tile(sf::Vector2i(2, 0)),
		Textures::instance().get_Textures(black, bishop), black));

	m_Chess_Pieces[1][bishop].push_back(new Bishop(m_Board.get_Tile(sf::Vector2i(5, 0)),
		Textures::instance().get_Textures(black, bishop), black));

	m_Chess_Pieces[1][knight].push_back(new Knight(m_Board.get_Tile(sf::Vector2i(1, 0)),
		Textures::instance().get_Textures(black, knight), black));

	m_Chess_Pieces[1][knight].push_back(new Knight(m_Board.get_Tile(sf::Vector2i(6, 0)),
		Textures::instance().get_Textures(black, knight), black));

	m_Chess_Pieces[1][rook].push_back(new Rook(m_Board.get_Tile(sf::Vector2i(0, 0)),
		Textures::instance().get_Textures(black, rook), black));

	m_Chess_Pieces[1][rook].push_back(new Rook(m_Board.get_Tile(sf::Vector2i(7, 0)),
		Textures::instance().get_Textures(black, rook), black));


	for (unsigned int i = 0; i < 2; i++) {
		for (unsigned int k = 0; k < 8; k++) {

			m_Chess_Pieces[i][pawn].push_back(new Pawn(m_Board.get_Tile(sf::Vector2i(k, (i * 5) + 1)),
				Textures::instance().get_Textures(i, pawn), i));

		}
	}
}
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
	void Controller::draw_All_Tools() {

		for (int k = 0; k < 2; k++)
			for (int i = 0; i < different_Tools; i++)
				for (int j = 0; j < m_Chess_Pieces[k][i].size(); j++)
					(*m_Chess_Pieces[k][i][j]).draw_Tool(m_Game_Window);
	}
















	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


















