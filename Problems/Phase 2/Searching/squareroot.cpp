#include<bits/stdc++.h>
using namespace std;

int squareRoot(int n)
{
   return floor(sqrt(n));
}

int main()
{
    int n=0;
    cout << "Enter the number:\n";
    cin >> n;
    int result=squareRoot(n);
    cout << "The square root is " << result << "\n";
    return 0;
}