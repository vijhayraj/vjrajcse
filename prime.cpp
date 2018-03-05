#include <iostream>
using namespace std;
class Prime
{
    int i,n,count=0;
    public:
    void calculate()
    {
        cout<<"enter the number";
        cin>>n;
        for(i=2;i<n;i++)
        {
            if(n%i == 0)
            {
                count = 1;
                break;
            }
         }
        if(count == 0)
        {
            cout<<"it is prime";
        }
        else
        {
            cout<<"it is not prime";
        }
   }
    public:
    
};
int main()
{
    Prime p;
    p.calculate();
  return 0;
}
