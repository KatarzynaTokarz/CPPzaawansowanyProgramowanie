//Zadanie 17
//Utwórz klasê Employee(first_name, last_name, email, gender(enum!), salary, login, password).
//Do obs³ugi pliku stwórz sobie klasy EmployeeFileReader, EmployeeFileWriter.Sproboj samemu je zaprojektowaæ.
//Dane wczytaj z pliku employee_input.csv.
//Jego struktura jest nastêpuj¹ca :
//first_name, last_name, email, gender, salary
//
//a) Dla ka¿dego pracownika wygeneruj unikalny login
//login powinien byc wygenerowany jako dwie pierwsze litery nazwiska i imienia,
//a je¿eli ju¿ taki jest zajêty to dodajmy kolejne litery nazwiska, a¿ do uzyskania wolnego loginu,
//np: Roby Helian->rohe
//Robert Hello->rohel
//Rose Helian->roheli
//Robert Helian->rohelian1
//b) Wygeneruj dla ka¿dego pracownika losowe has³o sk³adaj¹ce siê z :
//-od 8 - 12 znaków(losowo)
//- przynajmniej 1 litery(me³e i duze), 1 cyfry i 1 znaku specjalnego(ze zbioru : !? @#$ % &+= -)
//A nastêpnie zapisz do pliku passwords.csv loginy, adresy email i has³a w formacie :
//login, mail, password
//c)Wylicz statystyki :
//-Iloœæ osób o imieniu na ka¿d¹ z liter alfabetu
//- Iloœæ unikalnych imion, oraz najczêœciej wystêpuj¹ce imiê(lub imiona jeœli maj¹ tak¹ sam¹ czêstotliwoœæ)
//- Œrednie zarobki wszystkich pracowników, œrednie zarobki kobiet i mê¿czyzn
//d) Do pliku top10_salary.csv wypisz imiona, nazwiska i zarobki 10 najlepiej op³acanych osób
//a do pliku least10_salary.csv wypisz imiona, nazwiska i zarobki 10 najgorzej zarabiaj¹cych osób
//

#include <iostream>
#include <fstream>
#include <string>


int main()
{

}
