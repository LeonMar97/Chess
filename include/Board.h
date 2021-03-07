#include <vector>
#include<iostream>
#include <SFML/Graphics.hpp>
#include "Tile.h"
#include "Macros.h"
#pragma once
class Board{


public:
	void draw_Board(sf::RenderWindow& game_Window)const;
	Tile& get_Tile(sf::Vector2i pos) { return m_Board[pos.y][pos.x]; }const
	Board();
	
private:

	
	std::vector<std::vector<Tile>> m_Board;
};