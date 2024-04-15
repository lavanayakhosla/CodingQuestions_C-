#include<iostream>
using namespace std;
int main ()

{
   //please note output for all programs 

  // program 1 

  //"\n" can only be used with strings , not with 'a\n' 

  cout<<'a\n' // does not generate desired output 

  //program 2

    cout<<"Hello"<<"World";
  //output is HelloWorld No SPACES

  //program 3

  char d='x';
  cout<<d;

  //output is x

  //program 4

  cout<<d;
  //if not defined before , error 

  int a =10;
  cout<<a;
  //prints a 

  //program 5
  int a =100;
  char b;
  b=a;
  cout<<b;

  //output is d vvvvimp

  //program 6

  char c ='y';
  int a;
  a=c;
  cout<<a;

  //output is 121

  //program 7

 /* There is something called char 0 
    char d = '0';
  ASCII value is 48*/

  int i =10;
  char c = 'a';
  int o = i+c;
  cout<<o;

  
  
  
  
  
  
  
  
  return 0;

}
