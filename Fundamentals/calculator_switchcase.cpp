#include<iostream>
using namespace std;
int main ()
{
  char op;
  
  float a , b ;
  
  cout<<"Enter first number"<<endl; cin>>a;
  cout<<"Enter second number"<<endl; cin>>b;

  cout<<"Enter Operation , Enter E to exit"<<endl;
  cin>>op;

  while( op !='E')
    {switch (op)
      { 
              case '+' : cout<<a+b<<endl; break;
              case '-' : cout<<a-b<<endl;break;
              case '*' : cout<<a*b<<endl; break;
              case '/' : cout<<(float)a/(float)b<<endl; break;
              default: cout<<"This operation is not permitted"<<endl; 
            
      }   cin>>op;
    }








  return 0;
}
