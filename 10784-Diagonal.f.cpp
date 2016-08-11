#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    long long i,n,j,l,u,t;
    t=0;
    while(1)
    {
        cin>>n;
        if(n==0)break;
        t++;
        l=4,u=44721362;
        while(l<u)
        {
            i=(l+u)/2;
            if(i*(i-1)/2-i==n)
            {
                cout<<"Case "<<t<<": "<<i<<endl;
                break;
            }
            else if(i*(i-1)/2-i>n)
            {
                if((i-1)*(i-2)/2-i+1<n)
                {
                    cout<<"Case "<<t<<": "<<i<<endl;
                    break;
                }
                else
                    u=i;
            }
            else
            {
                if(i*(i+1)/2-i-1>n)
                {
                    cout<<"Case "<<t<<": "<<i+1<<endl;
                    break;
                }
                else
                    l=i;
            }
        }
    }
    return 0;
}

