#include<iostream>
using namespace std;
int main()
{
   // to find HCF of 2 numbers
   int num1,num2,hcf,min;

   cout<<"Enter first number  \n";
     cin>>num1;

     cout<<"Enter second number  \n";
     cin>>num2;

    min = num1;
   if(num2<num1){min =num2;}
 
    while (min>=0)
  { if(num1%min==0 && num2%min==0){hcf=min;break;}
   else {min--;}}
   cout<<hcf;

   








    return 0;
}
