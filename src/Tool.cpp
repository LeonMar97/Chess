#include "Tool.h"

Tool::Tool( Tile& cur_Tile, const sf::Texture &tex)
	:m_Tool(tex)
{
	m_Tool.setTextureRect(sf::IntRect(0,350 ,350, 350));//(first,second parameters are starting point the third and forth are the amount 
	m_Tool.setScale(cur_Tile.get_Tile().getScale().x  /3.5, cur_Tile.get_Tile().getScale().y / 3.5);
	m_Tool.setPosition(cur_Tile.get_Tile().getPosition());
	
}

void Tool::draw_Tool(sf::RenderWindow& game_Window)const {
	game_Window.draw(m_Tool);
}
