#include <iostream>
using namespace std;
int main()
{
int m,a=0;
cout<<"Enter any num : ";
cin>>m;
while(m>0)
{
m=m/10;
a++;
}
cout<<"\n no. of digits in given number is: "<<a;
return 0;
}
