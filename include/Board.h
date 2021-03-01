#include <vector>
#include<iostream>
#include <SFML/Graphics.hpp>
#include "Tile.h"
#pragma once
class Board{


public:

	Board();

private:

	
	std::vector<std::vector<Tile>> m_Board;
};