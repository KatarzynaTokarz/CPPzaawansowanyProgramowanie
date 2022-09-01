//Zadanie 6
//Stwórz listê liczb od 1 do 1000. Rozdziel te liczby na dwie osobne listy : liczby pierwsze i nie liczby pierwsze.
//

#include <iostream>
#include<list>
#include <string>
#include <iterator>

bool czyPierwsza(int n)
{
    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i < n; ++i)
    {
        if ( n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    std::list<int>listaLiczb(1000);
    int data = 0;
    for (std::list<int>::iterator it = listaLiczb.begin(); it != listaLiczb.end(); ++it)
    {
        *it = data += 1;
    }
    //for (std::list<int>::iterator it = listaLiczb.begin(); it != listaLiczb.end(); ++it)
    //{
    //    std::cout << *it << ' ' << std::endl;
    //}
    std::list<int> liczbyPierwsze;

    liczbyPierwsze.splice(liczbyPierwsze.begin(), listaLiczb, listaLiczb.begin(), std::next(listaLiczb.begin(), listaLiczb.size() / 2));

    std::cout << "Pierwsza lista: " << std::endl;
    for (const auto& s : liczbyPierwsze) std::cout << s << ' ';
    std::cout << std::endl;

    std::cout << "Druga lista: " << std::endl;
    for (const auto& s : listaLiczb) std::cout << s << ' ';
    std::cout << std::endl;
    return 0;
}



