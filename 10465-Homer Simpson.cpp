#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int n,m,t,i,max,d,dr,min;
    while(scanf("%d%d%d",&n,&m,&t)!=EOF)
    {
        if(n>m)
        {
            i=n;
            n=m;
            m=i;
        }
        max=0;
        min=t+1;
        for(i=t/n;i>=0;i--)
        {
            if((t-i*n)%m==0)
            {
                max=i+(t-i*n)/m;
                break;
            }
            max=0;
        }
        if(max==0)
        for(i=t/n;i>=0;i--)
        {
            d=i+(t-i*n)/m;
            dr=t-i*n-((int)(t-i*n)/m)*m;
            if(dr<min)
            {
                max=d;
                min=dr;
            }
        }
        cout<<max;
        if(min<t+1&&min>0)
            cout<<" "<<min;
        cout<<endl;
    }
    return 0;
}
