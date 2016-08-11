#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    int k,n,i,j,l,m,x;
    while(1)
    {
        cin>>k;
        if(k==0)break;
        n=2*k;
        int a[n];

        for(i=k+1;;i++)
        {
            for(j=0;j<n;j++)
                a[j]=1;
            m=0;l=0;x=0;
            while(x<k)
            {
                if(a[l]==1)
                {
                    m++;
                    if(m==i)
                    {
                        a[l]=0;x++;m=0;
                        if(l<k){x=0;break;}
                    }
                }
                l++;
                if(l==n)l=0;
            }
            if(x==k)break;
        }
        cout<<i<<endl;
    }
    return 0;
}
