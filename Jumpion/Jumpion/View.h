#pragma once

#include <SFML/Graphics.hpp>
#include <memory>

/**
*	\class		View
*	\version	1.0
+	\author		michael.mayer
*	\brief		stores a specific game loop (i.e. game, menu, ...)
*/
class View {
public:
	View(sf::RenderWindow *pWindow);
	~View();

	sf::RenderWindow *pWindow = nullptr;

	virtual void run( void);

};