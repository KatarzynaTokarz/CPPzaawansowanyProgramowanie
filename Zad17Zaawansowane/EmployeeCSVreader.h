#pragma once
#include "IEmployeeFileReader.h"

#include <vector>

class EmployeeCSVReader : public IEmployeeFileReader
{
public:
	std::vector<Employee> readEmployees(std::string filePath) override; 
	//wewnatrz tej funkcji mozemy sobie tez od razu tymczasowo utworzyc wszystkie zmienne do oblsugi plikow

    std::string fileNameWithPath("C:\\Users\\Michal\\source\\repos\\SDA_CPP1\\CPP_Zaawansowany\\Pliki\\Pliki.cpp");
    std::string fileName("Pliki.cpp");
    std::ifstream file(fileNameWithPath);

    if (file.is_open()) 
    {
        std::cout << "Hurra wczyta³em plik " << fileName << std::endl << std::endl;
    }
    else
    {
        std::cout << "Nie mogê otworzyæ pliku :(";
        return -1;
    }
private:
	//pola potrzbene do obslugi plików
};