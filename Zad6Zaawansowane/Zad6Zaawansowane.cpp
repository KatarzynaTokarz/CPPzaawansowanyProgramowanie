//Zadanie 6
//Stwórz listê liczb od 1 do 1000. Rozdziel te liczby na dwie osobne listy : liczby pierwsze i nie liczby pierwsze.
//

#include <iostream>
#include <list>

bool czyPierwsza(int n)
{
    if (n < 1)
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
    
    std::list<int> liczbyPierwsze;
    std::list<int> liczbyZlozone;

    for (std::list<int>::iterator it = listaLiczb.begin(); it != listaLiczb.end(); ++it)
    {
        if (czyPierwsza(*it))
        {
            liczbyPierwsze.push_back(*it);
        }
        else
        {
            liczbyZlozone.push_back(*it);

        }
    }

    std::cout << "Lista liczb pierwszych " << std::endl;
    for (const auto& s : liczbyPierwsze) std::cout << s << ' ';
    std::cout << std::endl;

    std::cout << "Lista liczb zlozonych: " << std::endl;
    for (const auto& s : liczbyZlozone) std::cout << s << ' ';
    std::cout << std::endl;
}



