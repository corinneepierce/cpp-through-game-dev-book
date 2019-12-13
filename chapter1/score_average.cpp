// Score Average
// This program gets three game scores from the user
// and displays the average.

#include <iostream>
using namespace std;

int main()
{
    int score1;
    int score2;
    int score3;

    // Ask user for scores
    cout << "Enter score 1: ";
    cin >> score1;

    cout << "Enter score 2: ";
    cin >> score2;

    cout << "Enter score 3: ";
    cin >> score3;

    // Calculate average
    int average = (score1 + score2 + score3) / 3;

    // Display average
    cout << "Your average score is " << average << ".";

    return 0;
}