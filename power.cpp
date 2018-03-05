#include <iostream>
using namespace std;
int main()
{
    int a,b,i,temp=1;
    cout<<"enter the values";
    cin>>a>>b;
    for(i=1;i<=b;i++)
    {
        temp=temp*a;
    }
    cout<<temp;
}
