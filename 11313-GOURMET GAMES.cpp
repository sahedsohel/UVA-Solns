#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int m,n,t,i,j,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        i=0;
        while(n>m)
        {
            i+=(n/m);
            n=n/m+n%m;

        }
        if(n%m==0)
            cout<<i+1<<endl;
        else
            cout<<"cannot do this"<<endl;
    }
    return 0;
}

