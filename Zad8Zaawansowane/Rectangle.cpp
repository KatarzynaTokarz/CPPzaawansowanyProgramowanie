#include "Rectangle.h"

float Rectangle::calculateArea()
{
	return sideA * sideB;
}

bool Rectangle::isSquare()
{
	return false;
}

void Rectangle::input(float a, float b)
{
    sideA = a;
    sideB = b;
}
