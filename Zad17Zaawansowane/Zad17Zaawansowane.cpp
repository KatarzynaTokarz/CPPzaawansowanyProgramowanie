//Zadanie 17
//Utw�rz klas� Employee(first_name, last_name, email, gender(enum!), salary, login, password).
//Do obs�ugi pliku stw�rz sobie klasy EmployeeFileReader, EmployeeFileWriter.Sproboj samemu je zaprojektowa�.
//Dane wczytaj z pliku employee_input.csv.
//Jego struktura jest nast�puj�ca :
//first_name, last_name, email, gender, salary
//
//a) Dla ka�dego pracownika wygeneruj unikalny login
//login powinien byc wygenerowany jako dwie pierwsze litery nazwiska i imienia,
//a je�eli ju� taki jest zaj�ty to dodajmy kolejne litery nazwiska, a� do uzyskania wolnego loginu,
//np: Roby Helian->rohe
//Robert Hello->rohel
//Rose Helian->roheli
//Robert Helian->rohelian1
//b) Wygeneruj dla ka�dego pracownika losowe has�o sk�adaj�ce si� z :
//-od 8 - 12 znak�w(losowo)
//- przynajmniej 1 litery(me�e i duze), 1 cyfry i 1 znaku specjalnego(ze zbioru : !? @#$ % &+= -)
//A nast�pnie zapisz do pliku passwords.csv loginy, adresy email i has�a w formacie :
//login, mail, password
//c)Wylicz statystyki :
//-Ilo�� os�b o imieniu na ka�d� z liter alfabetu
//- Ilo�� unikalnych imion, oraz najcz�ciej wyst�puj�ce imi�(lub imiona je�li maj� tak� sam� cz�stotliwo��)
//- �rednie zarobki wszystkich pracownik�w, �rednie zarobki kobiet i m�czyzn
//d) Do pliku top10_salary.csv wypisz imiona, nazwiska i zarobki 10 najlepiej op�acanych os�b
//a do pliku least10_salary.csv wypisz imiona, nazwiska i zarobki 10 najgorzej zarabiaj�cych os�b
//

#include <iostream>
#include <fstream>
#include <string>


int main()
{

}
