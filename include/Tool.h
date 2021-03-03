#include <SFML/Graphics.hpp>
#include <iostream>
#include "Tile.h"
#pragma once
//abstract base class
class Tool {
public:
	Tool( Tile& cur_Tile, const sf::Texture& tex);
	void draw_Tool(sf::RenderWindow& game_Window)const;
	//virtual bool move() = 0;
	

private:
	sf::Sprite m_Tool;




};