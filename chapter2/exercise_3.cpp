// Guess My Number 2.0
// Player picks a number and the computer must guess what it is.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));      //seed random number generator
    
    int secretNumber;
    int tries = 0;
    int computerGuess;
    
    //user picks a number between 1 and 100
    cout << "Enter a number between 1 and 100: ";
    cin >> secretNumber;

    //compare computer's random number between 1 and 100 to user's secretNumber
    //track computer's guesses
    do
    {
        computerGuess = rand() % 100 + 1;
        cout << "The computer guessed " << computerGuess << ".";
        ++tries;  
        
    } while (computerGuess != secretNumber || tries > 10);

    return 0;
}