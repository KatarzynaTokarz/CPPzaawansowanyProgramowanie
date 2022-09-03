//Zadanie 5
//Klasa : StringCensor
//Napisz klasê która bêdzie cenzurowaæ podane stringi(zamieniaæ wymagane litery na gwiazkê), operacje która ma wspieraæ ta klasa :
//-addCensoredLetter(char c)
//- std::string censor(std::string)

#include <iostream>
#include <string>
#include <algorithm>
#include <list>
#include <vector>

class StringCensor
{
private:
    //std::list<char>censoredLetters = {};
	std::vector<char> censoredLetters;
public:
	void addcensoredletter(char c)
	{
		censoredLetters.push_back(c);
	};
	std::string censor(std::string wyraz)
	{
		const char y = '*';

		//for (std::list<char>::iterator it = censoredLetters.begin(); it != censoredLetters.end(); ++it)
		//{
		//	std::replace(wyraz.begin(), wyraz.end(), *it, y);
		//}

		for (auto it = begin(censoredLetters); it != end(censoredLetters); ++it)
		{
			std::replace(wyraz.begin(), wyraz.end(), *it, y);
		}
		return wyraz;
	}
};
int main()
{
    StringCensor stringCensor1;
    stringCensor1.addcensoredletter('k');
    stringCensor1.addcensoredletter('a');
    stringCensor1.addcensoredletter('s');
	stringCensor1.addcensoredletter('h');
	stringCensor1.addcensoredletter('m');
	std::string doOcenzurowania;
    std::cout << "Podaj wyraz do ocenzurowania: " << std::endl;
    std::cin >> doOcenzurowania;
    std::cout << stringCensor1.censor(doOcenzurowania) << std::endl;
}
