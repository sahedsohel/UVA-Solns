#include<stdio.h>
int main()
{
    long long n,r,s,i,x;
    for(i=0;i<100;i++)
    {
        scanf("%lld",&n);
        if(n<0)break;
        x=1;s=0;
        while(n!=0)
        {
            r=n%3;
            n=n/3;
            s=s+r*x;
            x=x*10;
        }
        printf("%lld\n",s);
    }
    return 0;
}
