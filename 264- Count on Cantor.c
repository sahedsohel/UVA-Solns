#include<stdio.h>
#include<math.h>
int main()
{
    int n,t,l,a,b;
    while(scanf("%d",&t)!=EOF)
    {
        n=ceil((sqrt(8*t+1)-1)/2);
        l=t-n*(n-1)/2;
        if(n%2==0){a=l;b=n-l+1;}
        else{
        b=l;a=n-l+1;
        }
        printf("TERM %d IS %d/%d\n",t,a,b);
    }
    return 0;
}
