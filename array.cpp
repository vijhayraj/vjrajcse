#include <iostream>
using namespace std;
class Program
{
	int c[100],sum=0,i,n,b;
	public:
	void get()
	{
		
		cout<<"enter your number";
		cin>>n;
		cin>>b;
		for(i=1;i<=n;i++)
		{
			cout<<i<<"\t";
			}
	}
	void display()
	{
		for(i=1;i<=b;i++)
		{
			sum=sum+i;
		}
		cout<<"the answer is"<<sum;
		}
};
int main() {
Program a;
a.get();
a.display();
return 0;
}
