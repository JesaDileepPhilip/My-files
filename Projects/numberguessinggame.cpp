#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout << "WELCOME BUD, LETS GUESS A NUMBER" << endl;
    srand(time(0));
    int number_to_guess=rand()%100+1;    
    int count=0;
    int guessed_number=0;
    do
    {
        cout << "\nEnter a number:\n";
        cin >> guessed_number;
        if(number_to_guess<guessed_number)
        {
            cout << "\nToo High\n";
            count++;
        }
        else if(number_to_guess>guessed_number)
        {
            cout << "\nToo Low\n";
            count++;
        }
        else
        {
            count++;
            cout << "\nYUREKKA, YOU'RE RIGHT JUST LIKE ALWAYS\n";
            cout << "\nYou attempted for " << count << " times\n" << "\n";
        }
    }while(number_to_guess!=guessed_number);
    return 0;
}
