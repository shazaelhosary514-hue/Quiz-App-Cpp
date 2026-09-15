#include <iostream>
using namespace std;

int main()
{

    cout << "=== Quiz App ===\n";
    cout << "Q1: What is the capital of Egypt?\n";
    cout << "A) Alexandria\n";
    cout << "B) Cairo\n";
    cout << "C) Giza\n";

    char ans;
    cin >> ans;
    int Score = 0;

    if (ans == 'B' || ans == 'b')
    {
        cout << "Correct answer!\n";
        Score++;
    }
    else
    {
        cout << "Wrong! Correct answer: B\n";
        Score--;
    }

    cout << "Score:" << Score << endl;
    return 0;
}