#include "Board.h"


Board::Board() {
	for (unsigned int i=0; i < 8;i++) {
		m_Board[i].resize(8);
		for (unsigned int j=0; j < 8;j++) {
				m_Board[i].push_back(Tile(sf::Color::Black, sf::Vector2f(100, 100), sf::Vector2f(200.f + i * 100.f, 100.f + j * 100.f)));
		}
	}
}
