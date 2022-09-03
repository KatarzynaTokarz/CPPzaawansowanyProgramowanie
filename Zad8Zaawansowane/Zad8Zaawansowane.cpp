//Klasy: Rectangle(przechowuje d³ugoœci boków, wylicza pole, isSquare()),
#include <iostream>
#include "Rectangle.h"

//getRectangle metoda jedna
//
//w clasie rect menager trzeba umiescic ten wygenerwoaney
//
//rect menager w kosntruktorze albo w etodzie uzyje tego generatora fo tworzenia prostokata
//
//klasa 


int main()
{
	Rectangle r1;
	Rectangle r2;

	r1.setSides(3, 3);
	r2.setSides(9, 3);
	std::cout << "Area r1: " << r1.getArea() << std::endl;
	std::cout << "Area r2: " << r2.getArea() << std::endl;
	std::cout << r1.isSquare();
	std::cout << r2.isSquare();

}

