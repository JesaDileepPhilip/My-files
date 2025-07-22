#include<iostream>
using namespace std;

int main()
{
    int marks;
    cout <<"Enter the marks:";
    cin >>marks;
    if(marks<25)
    {
       cout <<"F"; 
    }
    else if(marks>=25 && marks<44)
    {
      cout <<"E";   
    }
    else if(marks>=44 && marks<=49)
    {
      cout <<"D";   
    }
    else if(marks>=50 && marks<60)
    {
      cout <<"C";   
    }
    else if(marks>=60 && marks<=79)
    {
      cout <<"B";   
    }
    else
    {
      cout <<"A";   
    }

}