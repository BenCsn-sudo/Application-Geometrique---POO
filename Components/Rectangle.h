#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <SFML/Graphics.hpp>
#include <cmath>
#include "Polygone.h"

class Rectangle : public Polygone {
private:
	float width;
	float height;
public:
	Rectangle(const sf::Vector2f& origin, const sf::Vector2f& direction, float w, float h)
		 : width(w), height(h)
	{
		// direction - origin = vecteur directeur du rectangle
		sf::Vector2f dir = direction - origin;

		// Longueur du vecteur
		float len = std::hypot(dir.x, dir.y);

		// Direction normalisée
		sf::Vector2f u = dir / len;

		// Vecteur perpendiculaire à u
		sf::Vector2f v(-u.y, u.x);

		// Construction des 4 points
		points = {
			origin,			// A
			origin + u * w,		// B
			origin + u * w + v * h,	// C
			origin + v * h		// D
		};
	}

	// Méthodes
	float area() const override;
	float perimeter() const override;
};

#endif
