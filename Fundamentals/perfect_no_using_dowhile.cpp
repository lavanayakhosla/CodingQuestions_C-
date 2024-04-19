#include<iostream>
using namespace std;
int main()

{
int n,sum=0;
  cout<<"Enter the number"<<endl; cin>>n;
  int i = 1;
do{
  if(n%i==0)
  { sum = sum+i;}
  i++;
 } while( i<n);

  if (sum == n){cout<<"Perfect number";}
  else cout<<"Not perfect"<<endl;
return 0;
}
