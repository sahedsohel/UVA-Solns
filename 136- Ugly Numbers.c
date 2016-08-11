#include<stdio.h>
#include<math.h>
int nprime(int n)
{
    int i,x;
    n=n+2;
    for(i=3;i<n;i+=2)
    {
        if(n%i==0){x=n,nprime(x);}
    }
    return n;
}

int main()
{
    int a,i,j,x,y=0;
    for(i=2;i>0;i++)
    {
        x=2;
        for(j=7;j<=i;)
        {
            if(i%j==0){x=1;break;}
            j=nprime(j);
        }printf("%d %d %d ",i,j,x);
        if(x==2&&(i%2==0||i%3==0||i%5==0)){printf("%d",i);y++;}
        if(y==15)break;
        printf("\n");
    }
}
