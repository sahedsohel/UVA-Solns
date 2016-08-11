#include<stdio.h>

int gcd(int j,int k)
{
    int r;
    while(j!=0)
    {
        r=k%j;
        k=j;
        j=r;
    }
    return k;
}

int main()
{
    int i,j,k,n,t=100,s;
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        if(n==0)break;
        else if(n<0)
        continue;
        s=0;
        for(j=1;j<=n;j++)
        for(k=1+j;k<=n;k++)
        s=s+gcd(j,k);
        printf("%d\n",s);
    }
    return 0;
}
