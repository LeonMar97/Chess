#include <vector>
#include <string> 
#include<iostream>
#include <stdlib.h>
#include <SFML/Graphics.hpp>
#pragma once

class Tile {
	public:
		void draw_Tile(sf::RenderWindow &game_Window)const ;
		Tile(sf::Color cr,sf::Vector2f size,sf::Vector2f pos);//constarctor gets size and color
		const sf::RectangleShape& get_Tile() { return  m_Tile; } ;
		//~~~~~~~~~~~~~~~~~~~private functions~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
	private:

		//~~~~~~~~~~~~~~~~~~~private members~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//

	private:

		sf::RectangleShape m_Tile;
};
