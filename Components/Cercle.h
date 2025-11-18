#ifndef CERCLE_H
#define CERCLE_H

#include <vector>
#include <SFML/Graphics.hpp>
#include "Figure.h"

class Cercle : public Figure {
private:
	sf::Vector2f centre;
	float rayon;
public:
	// Constructeur basique
	Cercle(const sf::Vector2f& c, float r) : centre(c), rayon(r) {}

	// Getters
	sf::Vector2f getCentre() const;
	float getRayon() const;

	// Méthodes
	float area() const override;
	float perimeter() const override;
	void draw(sf::RenderWindow& window) const override;
};

#endif
