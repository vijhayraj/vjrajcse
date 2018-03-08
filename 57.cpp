#include <iostream>
using namespace std;

int main()
{
  
  int m,n,temp,i;
  cout<<"enter the value of and b";
  cin>>m>>n;
  cout<<"before swapping"<<m<<endl<<n; 
  temp=m;
  m=n;
  n=temp;
  cout<<"after swapping"<<m<<endl<<n;
  
  return 0;
}
