#include<stdio.h>
#include<math.h>
#include<string.h>
int prime(int s)
{
    int i;
    if(s==2||s==3)return 1;
    if(s%2==0)return 0;
    else
    for(i=3;i<=sqrt(s);i+=2)
    {
        if(s%i==0)return 0;
    }
    return 1;
}

int main()
{
    char n[21];
    int l,i,s;
    while(scanf("%s",n)!=EOF)
    {
        l=strlen(n);
        s=0;
        for(i=0;i<l;i++)
        {
            if(n[i]>='A'&&n[i]<='Z')
            s=s+n[i]-64+26;
            else if(n[i]>='a'&&n[i]<='z')
            s=s+n[i]-96;
        }
        s=prime(s);
        if(s==1)
        printf("It is a prime word.\n");
        else
        printf("It is not a prime word.\n");
    }
    return 0;
}
