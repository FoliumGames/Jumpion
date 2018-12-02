#include <SFML/Graphics.hpp>

#include "View.h"

int main()
{
	sf::RenderWindow Window(sf::VideoMode(800, 600), "SFML TEST", sf::Style::Titlebar);

	View v(&Window);

	return 0;
}