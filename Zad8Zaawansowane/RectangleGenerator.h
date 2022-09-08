#pragma once
#include "Rectangle.h"
#include <random>
#include <iostream>
using namespace std;

class RangeRandGenerator
{
	uniform_real_distribution<int> dist;
	random_device rd;
	default_random_engine gen;
public:
	RangeRandGenerator(int from, int to) :
		dist(from, to), gen(rd()) {}

	int get() {
		return dist(gen);
	}
};

Rectangle generateRect()
{
	
}
//class RectangleGenerator
//{
//	RectangleGenerator(int min, int max):
//		distribution(min, max, generator(rd()) {
//	
//		//std::default_random_engine generator;
//		//std::uniform_int_distribution<int> distribution(1, 10);
//		//int number = distribution(generator);
//
//	}
//
//	//Rectangle generateRect()
//	//{
//	//	int a = distribution(1, 10);
//	//	int b = std::uniform_int_distribution<int> dist(0, 10);
//	//
//
//	//	return Rectangle(a, b);
//
//	//}
//
//private:
//		std::uniform_real_distribution<int> distribution;
//		std::random_device rd;
//		std::default_random_engine generator;
//	
//		//RangeRandGenerator(double from, double to) :
//		//	dist(from, to), gen(rd()) {}
//
//		//double get() {
//		//	return dist(gen);
//		//}
//};
// 
 


