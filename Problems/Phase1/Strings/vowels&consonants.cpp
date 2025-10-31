#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string:\n";
    getline(cin,s);

    int vowels=0;
    int consonants=0;

    for(int i=0;i<s.size();i++)
    {
        s[i]=tolower(s[i]);
    }

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            vowels++;
        }
        else
        {
            consonants++;
        }
    }
    cout << "The number of vowels = " << vowels << " and the number of consonants = " << consonants << "\n";
    return 0;
}