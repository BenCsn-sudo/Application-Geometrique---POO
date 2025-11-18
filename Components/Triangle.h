#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <cmath>
#include "Polygone.h"

class Triangle : public Polygone {
public:
	// On initialise directement les 3 sommets du triangle
	Triangle(const sf::Vector2f& A, const sf::Vector2f& B, const sf::Vector2f& C) {
		points = {A, B, C};
	}

	// Méthodes
	float area() const override;
	float perimeter() const override;
};

#endif
