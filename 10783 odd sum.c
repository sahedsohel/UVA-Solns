#include<stdio.h>
int main()
{
    int i=0,j=0,t,l,u,s=0,a[100],x;
    scanf("%d",&t);
    while(scanf("%d%d",&l,&u)==2)
    {
        if(l%2==0)
        {
            l=l+1;
        }
        for(;l<=u;l+=2)
        {
            s=s+l;
        }
        a[i]=s;
        i=i+1;
        s=0;
        if(i==t)break;
    }
    for(j=0;j<i; j++)
    {
        if(a[j]>0)
        {printf("Case %d: %d\n",j+1,a[j]);}
    }
    return 0;
}

