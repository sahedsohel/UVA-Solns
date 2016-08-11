#include<stdio.h>
int main()
{
    int m,s,i;
    char r[35];
    while(1)
    {
        scanf("%d",&m);
        if(m==0)break;
        i=0,s=0;
        while(m!=0)
        {
            r[i++]=m%2;
            if(r[i-1]==1)s++;
            m/=2;
        }
        printf("The parity of ");
        while(i--)
        printf("%c",r[i]+48);
        printf(" is %d (mod 2).\n",s);
    }
    return 0;
}
