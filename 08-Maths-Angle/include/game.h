#pragma once
#include <iostream>

#include "SFML/Graphics/RenderWindow.hpp"
#include "SFML/Graphics/Texture.hpp"
#include "SFML/Graphics/RectangleShape.hpp"
#include "SFML/Window/Event.hpp"

#include "SFML-Utilities.h"

using namespace std;
using namespace sf;

class Game{
  
public:
	Game();
	void init();
	void loop();

private:

	// The window ---------------------------------------------
	RenderWindow window_;

	sf::RectangleShape shapeDegrees;

	sf::RectangleShape shapeRadians;

};
