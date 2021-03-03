#include <iostream>
#include "Board.h"
#include <Windows.h>
#include "Controller.h"
int main() {
	Controller game;

	game.start_Game();
	//std::cout << "hello world";
	exit(EXIT_SUCCESS);
}