#include<stdio.h>
#include<string.h>
int main()
{
    int t,r[26]={0},i,l,m;
    char c[200];
    scanf("%d",&t);
    for(i=0;i<=t;i++)
    {
        gets(c);
        l=strlen(c);
        m=0;
        for(;l>-1;l--)
        {
            if(c[l]>96&&c[l]<123)
            {
                r[c[l]-97]++;if(r[c[l]-97]>m)m=r[c[l]-97];
            }
            else if(c[l]>64&&c[l]<91)
            {
                r[c[l]-65]++;if(r[c[l]-65]>m)m=r[c[l]-65];
            }
        }
    }
    for(;m>0;m--)
    for(i=0;i<26;i++)
    {
        if(r[i]==m)
        printf("%c %d\n",i+65,r[i]);
    }
    return 0;
}
