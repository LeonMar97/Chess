#include "Textures.h" 
#include "Macros.h"
#pragma once
Textures& Textures::instance() {
	static Textures  all_S;
	return all_S;
}
//set textures for all object in the game once
 Textures::Textures() {
	 //m_Font.loadFromFile("Love America.ttf");//setting one font
	

	 sf::Texture pic;
	 sf::Image im;
	 im.loadFromFile("pieces.png");
	 //resizing the tools by color..
	 m_Tool_Tex[white].resize(different_Tools);
	 m_Tool_Tex[black].resize(different_Tools);
	 
	 //setting white  texture.. 
	 m_Tool_Tex[white][king].loadFromImage(im, sf::IntRect(0, 0, toolSize.x,toolSize.y));
	 
	 m_Tool_Tex[white][queen].loadFromImage(im, sf::IntRect(320, 0, 350, 350));
	 
	 m_Tool_Tex[white][bishop].loadFromImage(im, sf::IntRect(650, 0, 350, 350));
	 m_Tool_Tex[white][knight].loadFromImage(im, sf::IntRect(1000, 0, 350, 350));
	 m_Tool_Tex[white][rook].loadFromImage(im, sf::IntRect(1350, 0, 350, 350));
	 m_Tool_Tex[white][pawn].loadFromImage(im, sf::IntRect(1650, 0, 350, 350));


	 m_Tool_Tex[black][king].loadFromImage(im, sf::IntRect(0, 350, toolSize.x, toolSize.y));
	 m_Tool_Tex[black][queen].loadFromImage(im, sf::IntRect(320, 350, 350, 350));
	 m_Tool_Tex[black][bishop].loadFromImage(im, sf::IntRect(650, 350, 350, 350));
	 m_Tool_Tex[black][knight].loadFromImage(im, sf::IntRect(1000, 350, 350, 350));
	 m_Tool_Tex[black][rook].loadFromImage(im, sf::IntRect(1350, 350, 350, 350));
	 m_Tool_Tex[black][pawn].loadFromImage(im, sf::IntRect(1650, 350, 350, 350));
	 /*
	 m_Tool_Tex[white][knight].loadFromImage(im, sf::IntRect(350, 0, 350, 350));


	 m_Tool_Tex[white][rook].loadFromImage(im, sf::IntRect(350, 0, 350, 350));


	 m_Tool_Tex[white][pawn].loadFromImage(im, sf::IntRect(350, 0, 350, 350));
	 */



	 //setting all the textures to smooth
	 for (unsigned int i = 0; i < 2; i++) {
		 for (unsigned int j = 0; j < different_Tools; j++) {
			 m_Tool_Tex[i][j].setSmooth(true);
		 }
	 }
	 /*
	 pic.loadFromImage(im, sf::IntRect(0, 0, 350, 350));
	 pic.loadFromImage(im, sf::IntRect(0, 0, 350, 350));
	 pic.loadFromImage(im, sf::IntRect(0, 0, 350, 350));
	 pic.loadFromImage(im, sf::IntRect(0, 0, 350, 350));
	 */
	

	
	
			
			
		}

	



	

