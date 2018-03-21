#include <iostream>
using namespace std;
int main()
{
    int num,n;
    
    cout<<"enter the number :";
    cin>>num;
    
    while(num!=0)
    
    {
    
        n=num%10;
        num=num/10;
       
        if(n%2!=0)
        
        {
            cout<<n<<endl;
            
        }
        
    }

    return 0;
}
