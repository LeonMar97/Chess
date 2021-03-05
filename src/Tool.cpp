#include "Tool.h"
/// <summary>
/// constractor for abstruct tool class
/// </summary>
/// <param name="cur_Tile"> first tile for the chess piece </param>
/// <param name="tex">texture for curren chess piece</param>
/// <param name="vector2f">the sprite texture cut from the sprite</param>
Tool::Tool( Tile& cur_Tile,const  sf::Texture &tex,bool color)
	:m_Tool(tex),m_Color(color)
{
	
//	m_Tool.setTextureRect(sf::IntRect(loc_In_Sprite.x,loc_In_Sprite.y,350, 350));//(first,second parameters are starting point the third and forth are the amount 
	m_Tool.setScale(cur_Tile.get_Tile().getScale().x  /3.5, cur_Tile.get_Tile().getScale().y / 3.5);
	m_Tool.setPosition(cur_Tile.get_Tile().getPosition());
	
}
/*
Tool::Tool(const Tool&) {
	this->m_Tool
}
*/


void Tool::set_Pos(sf::Vector2f& pos) {
	m_Tool.setPosition(pos);
}

void Tool::draw_Tool(sf::RenderWindow& game_Window)const {
	game_Window.draw(m_Tool);
}





