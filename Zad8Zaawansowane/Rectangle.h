#pragma once

class Rectangle
{
private:
	float sideA;
	float sideB;

public:
    void input(float a, float b);
	float calculateArea();
	bool isSquare();
};


