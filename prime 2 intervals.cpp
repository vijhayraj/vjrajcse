#include <iostream>
using namespace std;
class Prime
{
    int i,j,a,b,count=0;
    public:
    void calculate()
    {
        cout<<"enter the number";
        cin>>a>>b;
        for(i=a;i<b;i++)
        {
            count=0;
            for(j=2;j<=i/2;j++)
            {
            if(i%j==0)
            {
                count++;
                break;
            }
            }
               if(count==0&&i!=1)
           cout<<"The output is"<<i<<"\t";
         }
    }

};
int main()
{
    Prime p;
    p.calculate();
   return 0;
}
