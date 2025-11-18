#include "Cercle.h"

sf::Vector2f Cercle::getCentre() const { return centre; }

float Cercle::getRayon() const { return rayon; }

float Cercle::area() const {
	return 3.1415926535898f * rayon * rayon;
}

float Cercle::perimeter() const {
	return 2.f * 3.1415926535898f * rayon;
}

void Cercle::draw(sf::RenderWindow& window) const {
	// SFML dessine les cercles via CircleShape
	sf::CircleShape shape(rayon);

	// On place le cercle de facon a ce que centre.x et centre.y
	// corresponde réellement au centre :
	shape.setPosition(centre.x - rayon, centre.y - rayon);

	// Style
	shape.setFillColor(sf::Color(255, 180, 150));	// Orange
	shape.setOutlineColor(sf::Color::Black);
	shape.setOutlineThickness(2.f);

	window.draw(shape);
}
