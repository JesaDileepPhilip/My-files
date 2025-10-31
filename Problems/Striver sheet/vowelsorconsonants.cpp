#include<bits/stdc++.h>
using namespace std;

vector <int> vowelsOrConsonants(string s1, int count1, int count2)
{
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u' || s1[i]=='A' || s1[i]=='E' || s1[i]=='I' || s1[i]=='O' || s1[i]=='U')
        {
            count1++;
        }
        else{
            count2++;
        }
    }
    return {count1,count2};
}

int main()
{ 
    int count1=0;
    int count2=0;
    string s1;
    cout << "Enter the string: \n";
    getline(cin, s1);
    vector <int> result = vowelsOrConsonants(s1, count1, count2);
    cout << "Vowels: \n" << result[0] << "\n"; 
    cout << "Consonants: \n" << result[1]; 
    return 0;
}