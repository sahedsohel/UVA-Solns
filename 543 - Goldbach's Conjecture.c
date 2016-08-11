#include<stdio.h>
#include<math.h>
int isprime(int n);
int main()
{
    int n,i,a,b;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)break;
        b=0;
        if(n%2==0)
        {
            if(n-2==2)
                printf("%d = %d + %d\n",n,2,2);
            else
            {
                for(i=3; i<=n/2; i+=2)
                {
                    a=isprime(i);
                    if(a==1)
                    {
                        b=isprime(n-i);
                        if(b==1)
                        {
                            printf("%d = %d + %d\n",n,i,n-i);
                            break;
                        }
                    }
                }
                if(b==0)
                    printf("Goldbach's conjecture is wrong.\n");
            }
        }
    }
    return 0;
}

int isprime(int n)
{
    int x=1,i;
    if(n%2==0)x=0;
    else
    {
        for(i=3; i<=sqrt(n); i+=2)
        {
            if(n%i==0)
            {
                x=0;
                break;
            }
        }
    }
    return x;
}

