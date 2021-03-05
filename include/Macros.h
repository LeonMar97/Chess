#include <SFML/Graphics.hpp>

//const sf::Vector2f board_Start(560.f, 100.f);
const sf::Vector2f board_Start(0.f, 0.f);
const unsigned int different_Tools = 6;



enum pieces {
	king=0,
	queen=1,
	bishop=2,
	knight=3,
	rook=4,
	pawn=5
};
