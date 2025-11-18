#include "Carre.h"

float Carre::area() const {
	return side * side;
}


float Carre::perimeter() const {
	return 4.f * side;
}
