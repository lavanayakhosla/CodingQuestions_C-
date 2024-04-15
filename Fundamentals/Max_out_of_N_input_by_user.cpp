#include<iostream>
using namespace std;
int main()
{
   // to find largest out of N numbers input by user 
   int n,num,max=INT32_MIN;

   cout<<"Enter number of integers you want to compare \n";
     cin>>n;

   cout<<"Enter the number\n";
   for(int i =1;i<=n;i++)
   {cin>>num;
     if(num>=max){max=num;}
   }

   cout<<"Maximum number is "<< max;



    return 0;
}
