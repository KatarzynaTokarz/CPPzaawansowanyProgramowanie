// Zad4Zaawansowane.cpp : This file contains the 'main' function. Program execution begins and ends there.
////	Zadanie 4
//	Napisz klasê, która umo¿liwi kodowanie i dekodowanie stringa na alfabet Morsea.Ignorujemy znaki specjalne
//	KlasaMorseCodeTranslator
//	toMorseCode
//	fromMorseCode
//
//	https ://morsecode.world/international/translator.html
//

#include <map>
#include <string>
#include <list>
#include <iostream>



class MorseDecoder
{
private:
	std::map<const char, const std::string>morseList{ {'a', ".-"}, {'b', ".---."} };
	std::map<const std::string, const char>alphabetList{ {".-", 'a'}, {".-- - .", 'b'}};


public:
	std::string morseEncoder(std::string word)
	{
		std::string wynikowyString = "";

		for (int i = 0; i < word.size(); ++i)
		{
			wynikowyString = wynikowyString + morseList[word[i]];
		}

		return wynikowyString;
	};

	std::string morseDecoder(std::string morseSign)
	{
		std::string wynikowyString = "";
		std::list <std::string> listaMorsa = { ".-", "abc"};

		for (std::list<std::string>::iterator it = listaMorsa.begin(); it != listaMorsa.end(); ++it)
		{
			std::cout << ' ' << *it;
			wynikowyString = wynikowyString + alphabetList[*it];
		}

		//for (int i = 0; i < listaMorsa.size(); ++i)
		//{
		//	wynikowyString = wynikowyString + alphabetList[listaMorsa[i]];
		//}

		return wynikowyString;
	};



};

int main()
{

}