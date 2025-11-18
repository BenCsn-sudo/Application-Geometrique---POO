#include "Triangle.h"

// Aire = 1/2 * (produit vectoriel AB x AC)
float Triangle::area() const {
	const sf::Vector2f& A = points[0];
	const sf::Vector2f& B = points[1];
	const sf::Vector2f& C = points[2];
	return 0.5f * std::abs((B.x - A.x)*(C.y - A.y) - (B.y - A.y)*(C.x - A.x));
}

// Périmètre = somme des longueurs des 3 côtés
float Triangle::perimeter() const {

	// Lambda locale pour calculer la distance entre deux points
	// utilisation d'auto obligatoire (car création d'un type unique par le compilateur)
	auto dist = [](sf::Vector2f a, sf::Vector2f b) {
		return std::hypot(b.x - a.x, b.y - a.y);
	};
	return dist(points[0], points[1]) + dist(points[1], points[2]) + dist(points[2], points[0]);
}
