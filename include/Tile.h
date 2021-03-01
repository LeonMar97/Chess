#include <vector>
#include <string> 
#include<iostream>
#include <stdlib.h>
#include <SFML/Graphics.hpp>
#pragma once

class Tile {
	public:

		Tile(sf::Color cr,sf::Vector2f size,sf::Vector2f pos);//constarctor gets size and color


	private:
		sf::RectangleShape m_Tile;
};
