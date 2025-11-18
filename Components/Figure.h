#ifndef FIGURE_H
#define FIGURE_H

#include <SFML/Graphics.hpp>

/*
Création de la classe abstraite Figure
*/
class Figure {
public:
	/*
	Destructeur virtuel indispensable pour pouvoir supprimer une Figure*
	via un pointeur vers une classe dérivée
	*/
	virtual ~Figure() = default;

	// Méthodes virtuel
	virtual float area() const = 0;
	virtual float perimeter() const = 0;

	/*
	draw prend une référence vers une RenderWindow existante, cela permet
	à n'importe quelle figure dessinée d'utiliser la même fenêtre.
	*/
	virtual void draw(sf::RenderWindow& window) const = 0;
};

#endif
