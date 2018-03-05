#include <iostream>
using namespace std;
class Palindrome
{
    int n,num,a,rev = 0;
    public:
    
    void calculate()
    {
        cout << "Enter a positive number: ";
        cin >> num;
        n=num;
        while(num!=0)
        {
   a = num % 10;
         rev = (rev * 10) + a;
         num = num / 10;
        }
     cout << " The reverse of the number is: " << rev << endl;
    }
    public:
     void display()
     {
     if (n==rev)
     {
         cout << " The number is a palindrome";
     }
     else
     {
         cout << " The number is not a palindrome";
     }
     }
};
int main()
{
    Palindrome p;
    p.calculate();
    p.display();

    return 0;
}
