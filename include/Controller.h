#include "Board.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <Windows.h>
#include "Tool.h"
#include "King.h"
#pragma once

class Controller {

public:
	Controller();
	void start_Game();//the game loop



	//~~~~~~~~~~~~~~~~~~~~~~~~~~private functions~~~~~~~~~~//
private:
	void create_Tool_Pieces();
private:

	sf::RenderWindow m_Game_Window;
	Board m_Board;
	std::vector<std::vector<Tool*>>m_Chess_Pieces[2];
};