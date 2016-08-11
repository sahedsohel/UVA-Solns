#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    long long n,i,j,t;
    while(1)
    {
        cin>>n;
        if(n==0)break;
        int r[1000]={0};
        for(i=2;i<=n;i++)
        {
            t=i;
            for(j=2;j*j<=t;j++)
            {
                while(t%j==0)
                {
                    r[j-1]++;
                    t/=j;
                }
            }
            if(t!=1)
                r[t-1]++;
        }
        printf("%3lld! =",n);
        j=1;
        for(i=0;i<100;i++)
        {
            if(r[i]!=0)
            {
                if(j==16)
                {
                    printf("\n      ");
                    j=1;
                }j++;
                printf("%3lld",r[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
