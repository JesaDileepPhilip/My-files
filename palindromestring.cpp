#include<iostream>
#include<string>
using namespace std;

void palindrome(string s1)
{
    string s2 = "";
    for(int i = s1.length() - 1; i >= 0; i--)
    {
        s2 = s2 + s1[i];
    }
    if(s1 == s2)
    {
        cout << "\nPalindrome" << endl;
    }
    else
    {
        cout << "\nNot Palindrome" << endl;
    }
}

int main()
{
    string s1;
    cout << "Enter the string: \n";
    getline(cin, s1);
    palindrome(s1);
    return 0;
}