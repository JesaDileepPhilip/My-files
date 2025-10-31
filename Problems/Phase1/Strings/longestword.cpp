#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string:\n";
    getline(cin,s);

    stringstream ss(s);
    string word, longest;
    int maxlen=0;

    while(ss >> word)
    {
        if(word.size()>maxlen)
        {
            maxlen=word.size();
            longest=word;
        }
    }

    cout << "The longest word is " << longest << " with " << maxlen << " words\n";

    return 0;
}
