#include <SFML/Graphics.hpp>
#include <iostream>
#include "Tile.h"
#pragma once
//abstract base class
class Tool {
public:
	Tool( Tile& cur_Tile, const sf::Texture& tex,bool color);
	void draw_Tool(sf::RenderWindow& game_Window)const;
	//virtual bool move() = 0;
	void set_Pos(sf::Vector2f &pos);
	Tool(const Tool&);

protected:
	sf::Sprite m_Tool;
	bool m_Color;



};