#include "game.h"

Game::Game()
{

}

void Game::init() {

	window_.create(sf::VideoMode(1280, 720), "SAE Platformer");
	window_.setVerticalSyncEnabled(true);
	window_.setFramerateLimit(60.0f);

	shapeDegrees.setSize(sf::Vector2f(100.0f, 10.0f));
	shapeDegrees.setOrigin(shapeDegrees.getSize().x * 0.5f, shapeDegrees.getSize().y * 0.5f);
	shapeDegrees.setPosition(window_.getSize().x * 0.25f, window_.getSize().y * 0.5f);

	shapeRadians.setSize(sf::Vector2f(100.0f, 10.0f));
	shapeRadians.setOrigin(shapeRadians.getSize().x * 0.5f, shapeRadians.getSize().y * 0.5f);
	shapeRadians.setPosition(window_.getSize().x * 0.5f, window_.getSize().y * 0.5f);

}

void Game::loop()
{

	float angleDegrees = 0.0f;
	float angleRadians = 0.0f;

	while (window_.isOpen())
	{
#pragma region Event processes
		sf::Event event;

		while (window_.pollEvent(event))
		{
			// Windows events -------------------------------------------------------------------------------
			if (event.type == sf::Event::Closed)
			{
				window_.close();
				return;
			}
			if (event.type == sf::Event::Resized)
			{
				auto view = window_.getView();
				view.setSize(event.size.width, event.size.height);
				window_.setView(view);
			}

			// Mouse events ---------------------------------------------------------------------------------

		}
#pragma endregion

		angleDegrees += 5.0f;
		angleDegrees = fmod(angleDegrees, 360.0f);

		angleRadians += 0.1;
		angleRadians = fmod(angleRadians, M_PI * 2.0f);

		cout << "[Shape Degrees] Angle (deg) : " << angleDegrees << " - Angle (rad) : " << SFML_Utilities::degToRad(angleDegrees) << endl;
		shapeDegrees.setRotation(angleDegrees);

		cout << "[Shape Radians] Angle (rad) : " << angleRadians << " - Angle (deg) : " << SFML_Utilities::radToDeg(angleRadians) << endl;
		shapeRadians.setRotation(SFML_Utilities::radToDeg(angleRadians));

#pragma region Graphics process
		// Clear all background
		window_.clear();

		// Render All elements
		window_.draw(shapeDegrees);
		window_.draw(shapeRadians);

		// Display all elements
		window_.display();
#pragma endregion

	}
}
