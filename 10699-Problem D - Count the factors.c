#include<stdio.h>
#include<math.h>
int ispm(int n)
{
    if(n==2)return 1;
    if(n%2==0)return 0;
    int i;
    for(i=3;i<=sqrt(n);i+=2)
    {
        if(n%i==0)return 0;
    }
    return 1;
}

int main()
{
    int n,i,s;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
        break;
        s=0;
        for(i=2;i<sqrt(n);i++)
        {
            if(n%i==0){
            s+=ispm(i);
            s+=ispm(n/i);
            }
        }
        if(s==0)
        printf("%d : 1\n",n);
        else
        printf("%d : %d\n",n,s);
    }
    return 0;
}
