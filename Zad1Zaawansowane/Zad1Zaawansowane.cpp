#include <iostream>
#include <algorithm>
#include <string>


int main() {

    std::string wyraz;
    std::cout << "Podaj wyraz do odwrocenia:" << std::endl;
    std::cin >> wyraz;
    reverse(wyraz.begin(), wyraz.end());
    std::cout << wyraz << std::endl;
 
}