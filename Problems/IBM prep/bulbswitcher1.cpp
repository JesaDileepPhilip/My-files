// n bubs, toggles in evey round like every bulb ON in round 1, every 2nd bulb toggles in round 2, every 3rd bulb toggles in round 3 etc..
//how many bulbs remain on

#include<bits/stdc++.h>
using namespace std;

int bulbOn(int n)
{
    return sqrt(n);
}
int main()
{
    int n=0;
    cout << "Enter the number of bulbs:\n";
    cin >> n;

    int on=bulbOn(n);
    cout << "The number of bulbs on is " << on << "\n";
    return 0;
}