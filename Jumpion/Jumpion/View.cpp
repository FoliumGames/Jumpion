#include "View.h"

View::View(sf::RenderWindow *pWindow) {
	this->pWindow = pWindow;
}
View::~View() {
	delete pWindow;
}

void View::run(void) {
	
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	while (pWindow->isOpen())
	{
		sf::Event event;
		while (pWindow->pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				pWindow->close();
		}

		pWindow->clear();
		pWindow->draw(shape);
		pWindow->display();
	}

}