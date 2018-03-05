#include <iostream>
using namespace std;
class Program
{
	int i,m,sum=0;
	public:
	void display()
	{
		cout<<"enter your number"<<endl;
		cin>>m;
		for(i=1;i<=m;i++)
		{
			sum=sum+i;
			cout<<"the value is"<<sum;	
		}
	}
};
int main() {
Program a;
a.display();
return 0;
}
