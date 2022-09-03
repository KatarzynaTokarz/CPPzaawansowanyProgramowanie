//Zadanie 1
//Napisz funkcj�, kt�ra odwr�ci podanego stringa.
//
//Zadanie 2
//Napisz funkcj�, kt�ra przyjmie dwa stringi i zwr�ci ile liter maj� wsp�lnych.
//
//Zadanie 3
//Napisz klas� StringConverter, kt�ra bedzie mia�a dwie metody(statyczne) :
//	std::string toCamelCase(std::string)
//	std::string toSnakeCase(std::string)
//	camelCase : snake_case
//	helloSDA : hello_S_D_A
//	getColour : get_colour
//	isThisFirstEntry : is_this_first_entry
//
//	Zadanie 4
//	Napisz klas�, kt�ra umo�liwi kodowanie i dekodowanie stringa na alfabet Morsea.Ignorujemy znaki specjalne
//	KlasaMorseCodeTranslator
//	toMorseCode
//	fromMorseCode
//
//	https ://morsecode.world/international/translator.html
//
//Zadanie 5
//Klasa : StringCensor
//Napisz klas� kt�ra b�dzie cenzurowa� podane stringi(zamienia� wymagane litery na gwiazk�), operacje kt�ra ma wspiera� ta klasa :
//-addCensoredLetter(char c)
//- std::string censor(std::string)
//
//Zadanie 6
//Stw�rz list� liczb od 1 do 1000. Rozdziel te liczby na dwie osobne listy : liczby pierwsze i nie liczby pierwsze.
//
//Zadanie  7
//Stworz list� 50 liczb ca�kowitych dodatnich i wype�nij j� losowymi warto�ciami.Wypisz j�.
//Nast�pnie posortuj i wypisz list� tak, by na pocz�tku znalaz�y si� warto�ci parzyste uporz�dkowane rosn�co, a za nimi warto�ci nieparzyste uporz�dkowane malej�co.
//Podpowiedz : Podziel list� na dwie osobne, odpowiednio posortuj, a nast�pnie ja po��cz w jedn�.
//
//Zadanie 8 --> zrobic trzeba, 
//Klasy : Rectangle(przechowuje d�ugo�ci bok�w, wylicza pole, isSquare()),
//  RectangleGenerator(Klasa genreuj�ca losowy prostok�t o boku z podanego przedzia�u),
//  RectangleManger(tutaj faktycznie implementujemy zadania)
//Utw�rz wektor 100 prostok�t�w o losowych d�ugo�ciach bok�w z przedzia�u 0, 10 (u�yj liczb ca�kowitych)
//a) void printRectangles() - Wypisz wszystkie prostok�ty(for_each + unary function)
//b) size_t countRectangleBiggerThen(int area) - Wypisz ile jest prostok�t�w o polu wi�kszym ni� 50 (count_if)
//c) std::vector copyRectangles() - Przekopiuj wszystkie prostk�ty, kt�re s� kwadratami do drugiego vectora(copy_if) i go wypisz(for_each)
//d) void sortAreaDescending() - Posortuj vector prostok�t�w malejaco wed�ug pola powierzchni
//e) void deleteInvalid() Usu� wszystkie prostok�ty, kt�re maj� przynajmniej jeden bok r�wny 0
//
//Zadanie 9
//Szyfr Cezara - zwany szyfrem przesuwnym.
//+ std::string cypher(std::string text, int secretValue)
//+ std::string decepher(std::string text, int secretValue)
//https://pl.wikipedia.org/wiki/Szyfr_Cezara
//Zadanie 10 --> trudne
//Stw�rz klas� BigInt, kt�ra b�dzie mog�a przechowywa� dowolnie du�� liczb� ca�kowit�.
//Do implementacji mo�esz u�y� wewn�trz stringa lub tablicy dynamicznej std::vector<short>.
//Zaimplementuj :
//	c - tor domyslny(daje 0)
//	c - tor z 1 parametrem(long long)
//	c - tor kopiuj�cy
//	toString()
//	operator=
//	operator+
//	operator*
//	operator/
//	operator%
//	Wszystkie operatory por�wnania(Przypominam, �e wystarczy zaimplementowa� 1, a potem za jego pomoc� reszt�)
//	Uwaga!Napisz testy.
//	Zadanie 11 
//	a) Korzystaj�c z implementacji BigInt i z poprzedniego zadania zaimplementuj funkcje : silnia i fibonacci.
//	b) Nast�pnie zaimplementuj te metody korzystaj�c ze standardowego long long.
//	c) Por�wnaj dla jakich parametr�w long long ju� nie jest w stanie wyliczy� kolejnych warto�ci.
//	d) (Opcjonalnie) Zmierz i por�wnaj czas wyliczania warto�ci dla parametrow od 1 do warto�ci znalezionej w punkcie c.
//	d) (Opcjonalnie) Wylicz i zmierz czas obliczania 90!
//	Zadanie 12 --> wymagajace
//	Stw�rz klas� bufora cyklicznego : CircularBuffer
//	https ://en.wikipedia.org/wiki/Circular_buffer
//Proponowane metody(jak chcesz to zawsze mozna dodac wiecej).
//c - tor - 1 argument, na ile element�w utworzy� bufor
//push_back
//pop_back
//pop_front
//operator[]
//front()
//back()
//size()
//capacity()
//resize()
//insert(pos, T);
//Trudniejsze zadania :
//forward iterator i reverse_iterator
//insert(iterator, T);
//Uwaga!Napisz testy.