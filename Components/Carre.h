#ifndef CARRE_H
#define CARRE_H

#include <SFML/Graphics.hpp>
#include <cmath>
#include "Polygone.h"

class Carre : public Polygone {
private:
	float side;
public:
	Carre(const sf::Vector2f& origin,
		const sf::Vector2f& direction,
		float s): side(s)
    	{
	        sf::Vector2f dir = direction - origin;
	        float len = std::hypot(dir.x, dir.y);

	        sf::Vector2f u = dir / len; // direction normalisée
	        sf::Vector2f v(-u.y, u.x);  // vecteur perpendiculaire

	        points = {
			origin,
			origin + u * s,
			origin + u * s + v * s,
			origin + v * s
	        };
    	}

	float area() const override;
	float perimeter() const override;
};

#endif
