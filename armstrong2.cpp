#include <iostream>
using namespace std;
int main()
{
  int a,b,i, num,rem,sum=0,digit;
  cout<< "Enter a positive  integer: ";
  cin>>a>>b;
  for(i=a;i<=b;i++)
{
    num=i;
    sum=0;
  while(num!=0)
  {
      digit=num%10;
      sum=sum+digit * digit * digit;
      num=num/10;
      if(sum==i)
{
    cout<<"the values are"<<i<<"\t";
}
  
  }
}
return 0;
}
