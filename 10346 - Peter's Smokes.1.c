#include<stdio.h>
int main()
{
    long long b,c,s;
    while(scanf("%lld%lld",&c,&b)==2)
    {
        if(b>1)
        {
            s=c+(c-1)/(b-1);
            printf("%lld\n",s);
        }
    }
    return 0;
}
