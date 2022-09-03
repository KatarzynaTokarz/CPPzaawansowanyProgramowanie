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

	r1.input(3, 2);
	r2.input(9, 3);
	std::cout << "Area r1: " << r1.calculateArea() << std::endl;
	std::cout << "Area r2: " << r2.calculateArea() << std::endl;
}

