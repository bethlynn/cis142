#include <iostream>
#include <ctime>

/*
Beth Lynn Eicher
October 5, 2019
random number guess game
*/

using namespace std;

int main()
{

int guess;
int attempts=0;

// seed the random number with the system time.
srand(time(NULL));

int winningnum=(rand() %100);

    cout << "Welcome to the random number guess game." << endl;

    do {
        cout << endl << "guess a number 0 to 100: ";
        cin >> guess;

        attempts++;

        if (guess < winningnum)
            cout << endl << "too low";
        if (guess > winningnum){
            cout << endl << "too high";
            }
    } while (guess!=winningnum);

    // winning exit
    cout << endl << "You guessed the number in " << attempts << " attempts.";
    cout << endl << "The winning number is " << winningnum << endl;


    return 0;
}
