#pragma once
#include <vector>
#include "RectangleGenerator.h"
#include "Rectangle.h"

class RectangleManager

RectangleManager(int howMany)
{
	RectangleGenerator rectGen(0, 10);
	rectVect.push_back(rectGen.generateRect());
}
	private:
		std::vector<Rectangle> rectVect;

};

