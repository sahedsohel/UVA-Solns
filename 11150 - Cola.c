#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n<=0)
        n=0;
        else if(n%2==0)
        n=n/2*3;
        else
        n=n/2*3+1;
        printf("%d\n",n);
    }
    return 0;
}
