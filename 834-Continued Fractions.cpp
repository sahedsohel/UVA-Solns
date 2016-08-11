#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int n,d,t,i,a[1000];
    while(scanf("%d%d",&n,&d)!=EOF)
    {
        i=0;
        if(n==0)
            cout<<"[0]"<<endl;
        else if(n==1)
            cout<<"["<<"0;"<<d<<"]"<<endl;
        else
        {
            while(n!=1)
            {
                a[i]=n/d;
                n%=d;
                t=n;
                n=d;
                d=t;
                i++;
            }
            cout<<"["<<a[0];
            for(t=1; t<i; t++)
            {
                if(t==1)
                    cout<<";"<<a[t];
                else
                    cout<<","<<a[t];
            }
            cout<<"]"<<endl;
        }
    }
    return 0;
}

