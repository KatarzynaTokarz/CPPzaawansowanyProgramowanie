#pragma once
class RectangleGenerator
{
	RectangleGenerator(int min, int max)
	{
		random_device;
		engine(random device);
			distribution(engine);
	}

	Rectangle generateRect()
	{
		int a = pobieraszlosowo;
		int b = pobierasz losowo;

		return Rectangle(a, b);

	}

private:
	random_device;
	engine;
	distribution;

};

std::default_random_engine generator;
std::uniform_int_distribution<int> distribution(1, 6);
int dice_roll = distribution(generator);

