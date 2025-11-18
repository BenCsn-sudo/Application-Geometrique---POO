#include "Polygone.h"

// Accès en lecture seule
const std::vector<sf::Vector2f>& Polygone::getPoints() const {
	return points;
}

// Fonction de dessin
void Polygone::draw(sf::RenderWindow& window) const override {

	// Forme SFML pour avoir N sommets
	sf::ConvexShape shape;

	// On lui dit combien il y à de sommets
	shape.setPointCount(points.size())

	// On copie chaque sommet du vector dans l'objet graphique
	for (size_t i = 0; i < points.size(); i++) {
		shape.setPoint(i, point[i]);
	}

	// Style visuel
	shape.setFillColor(sf::Color(150, 150, 255));
	shape.setOutlineColor(sf::Color::Black);
	shape.setOutlineThickness(2.f);

	// On demande à SFML de dessiner la shape dans la fenêtre donnée
	window.draw(shape);
}
