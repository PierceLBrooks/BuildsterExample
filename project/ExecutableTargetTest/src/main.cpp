
#include <ExecutableTargetTest.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>

int main()
{
	Buildster::ExecutableTargetTest* test = new Buildster::ExecutableTargetTest();
	sf::RenderWindow* window = new sf::RenderWindow();
	window->create(sf::VideoMode::getFullscreenModes()[0], "BuildsterTest");
	while (window->isOpen())
	{
		sf::Event event;
		while (window->pollEvent(event))
		{
			switch (event.type)
			{
				case sf::Event::EventType::Closed:
					window->close();
					break;
				default:
					break;
			}
		}
		window->clear(sf::Color::Black);
		window->display();
	}
	delete test;
	return 0;
}

