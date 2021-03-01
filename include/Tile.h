#include <vector>
#include <string> 
#include<iostream>
#include <stdlib.h>
#include <SFML/Graphics.hpp>
#pragma once

class Tile {
	public:

		Tile(int color,sf::Vector2f size);//constarctor gets size and color


	private:
		sf::RectangleShape m_Tile;
		sf::Vector2f m_Size;
};
