#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cout << "Enter the string:\n";
    getline(cin,s);

    string chmod, part;
    string result="";

    stringstream ss(s);
    ss >> chmod;

    map <char,int> m={{'r',1},{'w',2},{'x',4},{'-',0}};

    while(ss >> part)
    {
        string permission=part.substr(2);
        int sum=0;
        for(auto c:permission)
        {
            sum=sum+m[c];
        }
        result=result+to_string(sum);
    }

    cout << "The value is " << result << "\n";
    return 0;
}