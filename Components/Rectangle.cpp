#include "Rectangle.h"

float Rectangle::area() const {
	return width * height;
}

float Rectangle::perimeter() const {
	return 2.f * (width + height);
}
