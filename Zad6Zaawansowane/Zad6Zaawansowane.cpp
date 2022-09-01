//Zadanie 6
//Stwórz listê liczb od 1 do 1000. Rozdziel te liczby na dwie osobne listy : liczby pierwsze i nie liczby pierwsze.
//

#include <iostream>
#include<list>

int main()
{
    std::list<int>listaLiczb(1000);
    int data = 0;
    for (std::list<int>::iterator it = listaLiczb.begin(); it != listaLiczb.end(); ++it)
    {
        *it = data += 1;
    }
    for (std::list<int>::iterator it = listaLiczb.begin(); it != listaLiczb.end(); ++it)
    {
        std::cout << *it << ' ' << std::endl;
    }
    return 0;
}