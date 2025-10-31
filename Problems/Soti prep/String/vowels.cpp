#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str="";
    cout << "\nEnter the string:";
    cin >> str;
    int n=str.size();
    int count=0;
    for(int i=0;i<n;i++)
    {
        str[i]=tolower(str[i]);
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            count++;
        }
    }
    cout << "\nThe number of vowels is: " << count << "\n";
    return 0;
}