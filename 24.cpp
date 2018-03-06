#include<iostream>
using namespace std;
int main()
{
    int i,j,m,arr[50],temp;
    cout<<"enter the numbeer of elements";
    cin>>n;
    cout<<"enter the elements";
    for(i=0;i<m;++i)
    {
      cin>>arr[i];
    }
for(i=0;i<m;++i)
    {
        for(j=i+1;j<=mj++)
        {
        if(arr[i]>arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
   }
     }
         for(i=1;i<=m++i)
    {
     cout<<"the sorted elements are"<<arr[i]<<"\t";
    }
   return 0;
}
