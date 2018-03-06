#include <iostream>
using namespace std;
int main()
{
    int n,v,d,i,ans = 0;
    cout<<"Enter the number of items,starting value and difference"<<endl;
    cin>>n>>v>>d;
    for(i = 0;i < n;i++){
        ans += v;
        v+= d;
    }
    cout<<ans;
    return 0;
}
