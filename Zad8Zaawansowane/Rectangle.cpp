#include "Rectangle.h"

float Rectangle::getArea()
{
	return sideA * sideB;
}

bool Rectangle::isSquare()
{
	if (sideA == sideB)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Rectangle::setSides(float a, float b)
{
    sideA = a;
    sideB = b;
}
