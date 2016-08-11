#include<stdio.h>
#include<string.h>
#include<math.h>
isprime(n)
{
    if(n==1)return 1;
    if(n==2)return 0;
    if(n%2==0)return 1;
    int i;
    for(i=3;i<=sqrt(n);i+=2)
    {
        if(n%i==0)return 1;
    }
    return 0;
}

int main()
{
    int t,i,j,l,x;
    char a[2002];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s",a);
        printf("Case %d: ",i+1);
        int r[200]={0};
        l=strlen(a);
        for(j=0;j<=l;j++)
        r[a[j]]++;
        x=0;
        for(j=0;j<200;j++)
        {
            if(r[j]>0){
            if(isprime(r[j])==0){
                printf("%c",j);x=1;
                }
            }
        }
        if(x!=1)printf("empty");
        printf("\n");
    }
    return 0;
}
