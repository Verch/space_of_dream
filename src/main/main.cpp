#include "graphics/image.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "Test");
	sf::Texture texture;
	texture.loadFromFile("data/2.gif");
	Image img(texture);
	
	img.SetPos(100, 100);
	img.SetSize(100.0f, 100.0f);
	img.Render();
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{

			if (event.type == sf::Event::Closed)
				window.close();
		}

		//if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
		//	img.move(0.3, 0);
		//}
		//if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
		//	s.move(-0.3, 0);
		//}
		
		window.clear();
		window.draw(img.GetSprite());
		window.display();
	}
	return 0;
}