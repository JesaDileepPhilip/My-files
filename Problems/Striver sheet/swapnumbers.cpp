#include<bits/stdc++.h>
using namespace std;

void swapNumbers(int n1, int n2)
{
    int n3=0;
    n3=n1;
    n1=n2;
    n2=n3;
    cout << n1 << n2;
}

int main()
{
    int n1=0;
    int n2=0;
    cout << "\nEnter input: \n";
    cin >> n1;
    cout << "\nEnter input: \n";
    cin >> n2;
    swapNumbers(n1, n2);
}