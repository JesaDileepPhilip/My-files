#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str="";
    cout << "Enter the sentence:\n";
    getline(cin, str);
    stringstream ss(str);
    string word="";
    map <string, int> freq;
    
    while(ss >> word)
    {
        freq[word]++;
    }
    cout << "\n";

    for(auto it: freq)
    {
        cout << it.first << "-->" << it.second << "\n";
    }
    return 0;
}