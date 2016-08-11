#include<stdio.h>
int main()
{
    long long a,b,c,d,s,x;
    while(1)
    {
        scanf("%lld %lld",&a,&b);
        if(a==0&&b==0)
        break;
        s=0,x=0;
        for(;a!=0||b!=0;)
        {
            c=a%10;
            d=b%10;
            a=a/10;
            b=b/10;
            s=s+c+d;
            if(s>9)
            {
                s=1;
                x++;
            }
            else
            s=0;
        }
        if(x>0)
        printf("%lld carry operations.\n",x);
        else
        printf("No carry operation.");
    }
    return 0;
}
