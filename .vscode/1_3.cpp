#include<iostream>
using namespace std;

int main()
{
    int age;
    cout <<"Enter age:";
    cin >>age;

    if(age<=18)
    {
      cout <<"Ineligible for job";  
    }
    else
    {
        cout <<"Eligible for job\n";  
        if(age>=55 && age<=57)
        {
            cout <<"Eligible for job but retires soon";
        }
        if(age>57)
        {
            cout <<"Retirement time";
        }
    }
}