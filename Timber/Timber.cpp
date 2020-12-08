#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
	// Create a video mode object
	VideoMode vm(1920, 1080);

	// Create and open a window for the game
	RenderWindow window(vm, "Timber!!!", Style::Fullscreen);

	while (window.isOpen())
	{
		/*
		************************
		Handles the player input
		************************
		*/
		
		if (Keyboard::isKeyPressed(Keyboard::Escape))
		{
			window.close();
		}

		/*
		************************
		Update the scene
		************************
		*/

		/*
		************************
		Draw the scene
		************************
		*/

		// Clear everything from the last frame
		window.clear();

		// Draw our game scene here

		// Show everything we just drew
		window.display();
	}

	return 0;
}