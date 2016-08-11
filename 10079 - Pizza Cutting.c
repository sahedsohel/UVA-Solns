#include<stdio.h>
int main()
{
    long long j,i=0,n,r;
    for(;;)
    {
        scanf("%lld",&n);
        if(n<0)
        break;
        r=n*(n+1)/2+1;
        printf("%lld\n",r);
    }
    return 0;
}
