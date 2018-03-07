#include<iostream>
 using namespace std;
 int main()
{
    char v[100];
    int i,count=1;
    cout<<"Enter a string:";
    gets(v);
    
    for(i=0;v[i]!='\0';++i)
    {
        if(v[i]==' ')
            count++;
    }
    
    cout<<"\n"<<count;
 
    return 0;
}
