#include<stdio.h>
int main()
{
    long long n,i,a,l,x,j=1;;
    while(1)
    {
        scanf("%lld %lld",&a,&l);
        if(a<0&&l<0)break;
        if(a==0||l==0||a>l)
        {j++;continue;}
        n=a,x=0;
        while(n!=16&&n<=l)
        {
            if(n%2==0)n=n/2;
            else
                n=3*n+1;
            x++;
        }
        if(n==16)x+=5;
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",j,a,l,x);
        j++;
    }
    return 0;
}
