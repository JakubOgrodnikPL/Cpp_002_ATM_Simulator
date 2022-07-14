//Correct PIN is 1729

#include <iostream>

using namespace std;

string PIN;

int main() //String is to avoid mistakes with PIN e.g. 0517
{
    cout << "This is a simple ATM simulator."
    "\nThe goal is to verify if PIN is correct or not using if/else instructions"
    "\nThe correct PIN is 1729 :)"
    "\n\nWelcome to our bank"
    "\n\nType PIN:" << endl;
    cin >> PIN;

    if(PIN=="1729")
    {
        cout <<"Correct PIN";
    }
    else
    {
        cout <<"Incorrect PIN";
    }

    cout <<"\nPress any key to exit";
    getchar();
    getchar();

    return 0;
}
