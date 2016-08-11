#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

char fb[5002][1000];

void nfb(int n)
{
    if(strlen(fb[n-2])==0)
    nfb(n-2);
    if(strlen(fb[n-1])==0)
    nfb(n-1);
    int i,s;
    if(strlen(fb[n-1])>0&&strlen(fb[n-2])>0)
    {
        i=0,s=0;
        while(i<strlen(fb[n-1])||i<strlen(fb[n-2]))
        {
            if(i<strlen(fb[n-1]))
                s+=fb[n-1][i]-48;
            if(i<strlen(fb[n-2]))
                s+=fb[n-2][i]-48;
            fb[n][i]=s%10+48;
            s/=10;
            i++;
        }
        if(s>0)
            fb[n][i]=s+48;
    }
    return ;
}

int main()
{
    fb[0][0]='1';
    fb[1][0]='2';
    int n,i;
    while(scanf("%d",&n)!=EOF)
    {
        if(strlen(fb[n])>0)
        for(i=strlen(fb[n])-1;i>-1;i--)
            cout<<fb[n][i];
        else
        {
            nfb(n);
            for(i=strlen(fb[n])-1;i>-1;i--)
            cout<<fb[n][i];
        }
        cout<<endl;
    }
    return 0;
}
