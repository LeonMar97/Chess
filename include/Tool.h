#include <SFML/Graphics.hpp>
#include <iostream>
#include "Tile.h"
#pragma once
//abstract base class
class Tool {
public:
	Tool( Tile& cur_Tile, const sf::Texture& tex, sf::Vector2f loc_In_Sprite,bool color);
	void draw_Tool(sf::RenderWindow& game_Window)const;
	//virtual bool move() = 0;
	void set_Pos(sf::Vector2f &pos);


protected:
	sf::Sprite m_Tool;
	bool m_Color;



};