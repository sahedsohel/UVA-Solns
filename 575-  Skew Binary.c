#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    long long i,s;
    int v,l,j;
    char n[100];
    while(1)
    {
        scanf("%s",n);
        v=strcmp(n,"0");
        if(v==0)break;
        l=strlen(n);
        s=0,j=1;
        for(i=l-1;i>=0;i--)
        {
            s=s+(n[i]-'0')*(pow(2,j)-1);
            j++;
        }
        printf("%lld\n",s);
    }
    return 0;
}
