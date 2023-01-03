#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
using namespace std;

int main() {
    // Difference between Do-Whie Loop and the While Loop is that Do-While Loop executes at least once.
    srand(time(NULL));
    int secretNum = rand() % 10;
    int guess = 0;

    // do {
    //     cout << "Guess the number: ";
    //     cin >> guess;
    //     if(guess > secretNum) cout << "Too Big" << endl;
    //     if(guess < secretNum) cout << "Too Small" << endl;
    // } while (secretNum != guess);

    // This is wrong 
    // if secretNum = 0, then the loop will execute without asking the input
    // which is the wrong way
    // while (secretNum != guess)
    // {
    //     cout << "Guess the Number: ";
    //     cin >> guess;
    //     if (guess > secretNum) cout << "Too Big" << endl;
    //     if (guess < secretNum) cout << "Too Small" << endl;
    // }

    // Correct Way
    while (true)
    {
        cout << "Guess the Number: ";
        cin >> guess;
        if (guess > secretNum) cout << "Too Big" << endl;
        if (guess < secretNum) cout << "Too Small" << endl;
        if (guess == secretNum) break;
    }
    

    cout << "You guessed It!" << endl; 

    return 0;
}