//Zadanie 2
//Napisz funkcjê, która przyjmie dwa stringi i zwróci ile liter maj¹ wspólnych.


#include <iostream>
#include <string>
#include<set>

int commonLetters(std::string wyraz1, std::string wyraz2) {

	std::string wspolneLitery;
	std::set <char> set;

	for (int i = 0; i < wyraz1.size(); ++i) {
		for (int j = 0; j < wyraz2.size(); ++j)
		{
			if (wyraz1[i] == wyraz2[j])
			{
				wspolneLitery = wspolneLitery + wyraz1[i];
			}
		}
	}
	for (int i = 0; i < wspolneLitery.size(); ++i)
	{
		set.insert(wspolneLitery[i]);
	}
	return set.size();
}

int main()
{
	std::cout << commonLetters("kasia", "tasia") << std::endl;
	std::cout << commonLetters("mama", "tata") << std::endl;
	std::cout << commonLetters("kon", "papuga") << std::endl;
	std::cout << commonLetters("kasia", "kasia") << std::endl;

}
