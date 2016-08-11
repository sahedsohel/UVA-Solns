#include<stdio.h>
int main()
{
    long long n,s,r;
    while(1)
    {
        scanf("%lld",&n);
        if(n==0)break;
        if(n<0)continue;
        s=0;
        if(n<10)s=n;
        else
        while(n>9)
        {
            s=0;
            while(n!=0)
            {
                r=n%10;
                n=n/10;
                s=s+r;
            }
            n=s;
        }
        printf("%lld\n",s);
    }
    return 0;
}
