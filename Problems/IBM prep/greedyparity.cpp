#include<bits/stdc++.h>
using namespace std;

int greedyParity(string s)
{
    int flips=0;
    int parity=0;

    for(auto ch:s)
    {
        int target=ch-'0';
        int current=parity;

        if(current!=target)
        {
            flips++;
            parity=parity^1;
        }
    }
    return flips;
}

int main()
{
    string s;
    cout << "Enter the binary number:\n";
    getline(cin,s);

    int flips=greedyParity(s);
    cout << "The minimum number of flips is " << flips << "\n";
    return 0;
}