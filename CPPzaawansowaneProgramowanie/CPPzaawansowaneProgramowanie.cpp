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
//Zadanie 8
//Klasy : Rectangle(przechowuje d�ugo�ci bok�w, wylicza pole, isSquare()), RectangleGenerator(Klasa genreuj�ca losowy prostok�t o boku z podanego przedzia�u), RectangleManger(tutaj faktycznie implementujemy zadania)
//Utw�rz wektor 100 prostok�t�w o losowych d�ugo�ciach bok�w z przedzia�u 0, 10 (u�yj liczb ca�kowitych)
//a) void printRectangles() - Wypisz wszystkie prostok�ty(for_each + unary function)
//b) size_t countRectangleBiggerThen(int area) - Wypisz ile jest prostok�t�w o polu wi�kszym ni� 50 (count_if)
//c) std::vector copyRectangles() - Przekopiuj wszystkie prostk�ty, kt�re s� kwadratami do drugiego vectora(copy_if) i go wypisz(for_each)
//d) void sortAreaDescending() - Posortuj vector prostok�t�w malejaco wed�ug pola powierzchni
//e) void deleteInvalid() Usu� wszystkie prostok�ty, kt�re maj� przynajmniej jeden bok r�wny 0