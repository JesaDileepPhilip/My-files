#include<bits/stdc++.h>
using namespace std;

int minFlipsForMonotoneIncreasing(string s)
{
    int flips=INT_MAX;

    vector <int> prefixOnes(s.size()+1,0);
    for(int i=0;i<s.size();i++)
    {
        prefixOnes[i+1]=prefixOnes[i]+(s[i]=='1');
    }

    vector <int> suffixZeros(s.size()+1,0);
    for(int i=s.size()-1;i>=0;i--)
    {
        suffixZeros[i]=suffixZeros[i+1]+(s[i]=='0');
    }

    for(int i=0;i<=s.size();i++)
    {
        flips=min(flips,prefixOnes[i]+suffixZeros[i]);
    }
    return flips;
}


int main()
{
    string s;
    cout << "Enter the binary number:\n";
    getline(cin,s);

    int flips=minFlipsForMonotoneIncreasing(s);
    cout << "The min flips is " << flips << "\n";
    return 0;
}