#include<iostream>
using namespace std;
int main()
{
    int a,b,i;
    cout<<"enter the value of a and b";
    cin>>a>>b;
    for(i=a;i<b;i++)
    {
      a=a+1;
        if(a%2==0)
        {
      cout<<"the values are"<<a<<endl;
        }
       
    }
    
}
