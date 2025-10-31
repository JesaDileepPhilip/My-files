#include<iostream>
using namespace std;
int main()
{
  char str[100];
  int length=0;
  cout<<"enter a string:";
  cin.getline(str,100);
  while (str[length] != '/0')
  {       
    length++;
  }
  cout<<"length of the string is :"<<length<<end l;
  return 0;
}