#include<stdio.h>
int main()
{
    long long n,s;
    while(scanf("%lld",&n)==1)
    {
        n=n/2+1;
        s=6*n*n-9;
        printf("%lld\n",s);
    }
    return 0;
}
