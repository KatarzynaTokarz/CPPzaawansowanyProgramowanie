//Zadanie  7
//Stworz list� 50 liczb ca�kowitych dodatnich i wype�nij j� losowymi warto�ciami.Wypisz j�.
//Nast�pnie posortuj i wypisz list� tak, by na pocz�tku znalaz�y si� warto�ci parzyste uporz�dkowane rosn�co, a za nimi warto�ci nieparzyste uporz�dkowane malej�co.
//Podpowiedz : Podziel list� na dwie osobne, odpowiednio posortuj, a nast�pnie ja po��cz w jedn�.

#include <iostream>
#include <list>
#include <algorithm>
#include <random>

bool czyParzysta(int n)
{
    if (n % 2 != 0)
    {
        return false;
    }
    else
    {
        return true;
    }

}
int main()
{
    std::list <int> fiftyNumbers;
    std::generate_n(back_inserter(fiftyNumbers), 50, rand);

    //wypisywanko
    //for (std::list<int>::iterator it = fiftyNumbers.begin(); it != fiftyNumbers.end(); ++it)
    //{
    //    std::cout << *it << std::endl;
    //}

    std::list<int> liczbyParzyste;
    std::list<int> liczbyNieparzyste;

    for (std::list<int>::iterator it = fiftyNumbers.begin(); it != fiftyNumbers.end(); ++it)
    {
        if (czyParzysta(*it))
        {
            
          liczbyParzyste.push_back(*it);

        }
        else
        {
           liczbyNieparzyste.push_back(*it);
        }
    }
    liczbyParzyste.sort();
    liczbyNieparzyste.sort(std::greater<int>());

    std::list <int> listaMerged;
    std::list<int>::iterator it;

    it = listaMerged.begin();
    listaMerged.splice(it, liczbyParzyste);
    listaMerged.splice(it, liczbyNieparzyste);

 //   std::cout << "Liczby parzyste asc:" << std::endl;
	//for (std::list<int>::iterator it = liczbyParzyste.begin(); it != liczbyParzyste.end(); ++it)
	//{
 //       listaMerged.push_back(*it);
	//}

 //   std::cout << "Liczby nieparzyste desc:" << std::endl;
 //   for (std::list<int>::iterator it = liczbyNieparzyste.begin(); it != liczbyNieparzyste.end(); ++it)
 //   {
 //       listaMerged.push_back(*it);
 //   }

    for (std::list<int>::iterator it = listaMerged.begin(); it != listaMerged.end(); ++it)
    {
        std::cout << *it << std::endl;
    }
}

