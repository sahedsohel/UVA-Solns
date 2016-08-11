#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int r[15],a[15],x;

void inloop(int d,int l,int i)
{
    if(d==6)
    {
        int j,k;
        cout<<a[r[0]];
        for(k=1;k<d;k++)
            cout<<" "<<a[r[k]];
        cout<<endl;x++;
    }
    else if(d<6)
    for(;i<l;i++)
    {
        r[d]=i;
        inloop(d+1,l,i+1);
    }
}

int main()
{
    int i,n,j=0;
    while(cin>>n)
    {
        if(n==0)break;
        if(j!=0)
            cout<<endl;
        x=0;
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(&a[0],&a[i]);
        inloop(0,n,0);
        j=1;

    }
    return 0;
}
