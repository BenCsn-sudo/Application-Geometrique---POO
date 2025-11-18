#ifndef POLYGONE_H
#define POLYGONE_H

#include <vector>
#include <SFML/Graphics.hpp>

class Polygone : public Figure {
//On utilise protected ici car on veut que les points soit modifiables par les sous classes
protected:
	// Tableau dynamique (std::vector) contenant les sommets du polygone. sf::Vector2f = point 2D de deux float
	std::vector<sf::Vector2f> points;

public:
	Polygone() = default;

	// Constructeur qui initialise directement la liste de points
	Polygone(const std::vector<sf::Vector2f>& pts) : points(pts) {}

	// Accès en lecture seule aux points
	const std::vector<sf::Vector2f>& getPoints() const;

	// Fonction de dessin commune à tous les polygones (triangle, rectangle et carré)
	void draw(sf::RenderWindow& window) const override;
};

#endif

