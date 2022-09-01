#include <iostream>
#include <string>
#include <ctype.h>

int main()
{

    std::string wyraz1 = "camelCaseCase";
    std::string wynikowyString = "";
    for (int i = 0; i < wyraz1.size(); ++i)
    {
        if (wyraz1[i] == std::toupper(wyraz1[i]))
        {
            wynikowyString += '_';
            wynikowyString += std::tolower(wyraz1[i]);
        }
        else
        {
            wynikowyString = wynikowyString + wyraz1[i];
        }
    }
    std::cout << wynikowyString;
}

