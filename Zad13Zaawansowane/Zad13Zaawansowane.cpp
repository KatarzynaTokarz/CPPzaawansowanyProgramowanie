//Zadanie 13
//Napisz gre w zgadywanie numeru.Program losuje liczbe z przedzia³u 1 - 100, a uzytkownik proboje zgadn¹æ.
//Po kazdej próbie program podpowiada czy liczba jest wiêksza czy mniejsza od podanej przez gracza.Gdy, gracz jest
//blisko(np + -3) to program powinien dodatkowo powiadomiæ gracza o tym, ¿e jest blisko.
//Zadanie mo¿na rozwi¹zac za pomoc¹ jednej klasy GuessTheNumber

#include <iostream>
#include<random>


class GuessTheNumber
{
private:
    int computerNumber;
    int maxNoOfTries;

public:
    void assignNewNumber()
    {
        std::random_device dev;
        std::mt19937 range(dev());
        std::uniform_int_distribution<std::mt19937::result_type> dist100(1, 100);

        computerNumber = dist100(range);
        std::cout << "Numer, ktory trzeba zgadnac - do celow testowych gry: " << computerNumber << std::endl;
        std::cout << std::endl;
    }
    int getNumber()
    {
        return computerNumber;
    }
    void setMaxNoOfTries(int a)
    {
        maxNoOfTries = a;
    }

    void randomNumberGuess()
    {
        int playerGuessNo;
        do
        {
            std::cout << "Enter a number between 1 and 100. You have " << maxNoOfTries << "  guesses." << std::endl;
            std::cin >> playerGuessNo;
            maxNoOfTries--;

            if ((playerGuessNo - computerNumber) < 3 && ((playerGuessNo - computerNumber) > -3))
            {
                std::cout << "You're close" << std::endl;
            }

            if ( playerGuessNo < computerNumber)
            {
                std::cout << "your guess id too low" << std::endl;
                std::cout << "you have " << maxNoOfTries << "left" << std::endl;

            }
            else if (playerGuessNo > computerNumber)
            {
                std::cout << "your guess is too high" << std::endl;
                std::cout << "you have " << maxNoOfTries << "  tries left" << std::endl;
            }
            else if (playerGuessNo == computerNumber)
            {
                std::cout << "your guess is correct. you won the game" << std::endl;
                break;
            }

            //if (playerGuessNo - computerNumber < abs(3))
            //{
            //    std::cout << "You're close" << std::endl;
            //
        } while (maxNoOfTries >0);
    }
};


int main()
{
    GuessTheNumber guess1;
    guess1.assignNewNumber();
    guess1.setMaxNoOfTries(5);
    guess1.randomNumberGuess();

}


