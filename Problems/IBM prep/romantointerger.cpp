#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter the roman numbre:\n";
    getline(cin,s);

    int result=0;

    map <char,int> m={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};

    for(int i=0;i<s.size();i++)
    {
        if(i+1<s.size() && m[s[i]] <m[s[i+1]])
        {
            result=result-m[s[i]];
        }
        else{
           result=result+m[s[i]]; 
        }
    }
    cout << "The integer value is " << result << "\n";
    return 0;
}