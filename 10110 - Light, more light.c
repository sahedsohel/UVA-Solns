#include<stdio.h>
#include<math.h>
int main()
{
    long long i,j,r[100],n,d;
    for(i=0;;i++)
    {
        scanf("%lld",&n);
        if(n==0){j=i--;break;}
        if(n<0)printf("no\n");
        else
        {
        d=sqrt(n);
        if(d==sqrt(n))printf("yes\n");
        else
        printf("no\n");
        }
    }
    return 0;
}
