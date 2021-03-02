#include "Board.h"


Board::Board() {
	
	unsigned int pos = 0;
	sf::Color Current_Color[2] = { sf::Color::White,sf::Color::Black };//easier to set color using it
	m_Board.resize(8);
	for (unsigned int i=0; i < 8;i++) {
		//m_Board[i].resize(8);
	
		
		for (unsigned int j=0; j < 8;j++) {
			if (j != 0)
				pos = !pos;//each col changes color but the first color in the new row is the last color in the last row

				m_Board[i].push_back(Tile(Current_Color[pos], sf::Vector2f(100, 100), sf::Vector2f(200.f + i * 100.f, 100.f + j * 100.f)));
		
		}

	}
}
