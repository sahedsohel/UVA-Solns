#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

int main()
{
    int n,i,x,l,m=0;
    unsigned long long s;
    char b[30];
    cin>>l;
    while(l--)
    {
        cin>>b;
        m++;
        printf("Data set %d: ",m);
        n=strlen(b);
        int r[26]={0},t[20];
        for(i=0;i<n;i++)
        {
            r[b[i]-65]++;
        }
        x=0;
        for(i=0;i<26;i++)
        {
            if(r[i]>1){t[x]=r[i];x++;}
        }
        s=1;
        for(i=2;i<=n;i++)
            s*=i;
        for(i=0;i<x;i++)
            for(n=2;n<=t[i];n++)
                s/=n;
        cout<<s<<endl;
    }
    return 0;
}
