#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

int digit(int s)
{
    int m=0;
    while(s/10>0)
    {
        while(s>0)
        {
            m+=s%10;
            s/=10;
        }
        s=m;m=0;
    }
    return s;
}

int main()
{
    char c[25],d[25];
    int i,s,k,l;
    double r;
    while(1)
    {
        if(gets(c)==0)break;
        gets(d);
        s=0;
        for(i=0;i<strlen(c);i++)
        {
            if(c[i]>64&&c[i]<91)
            s+=c[i]-64;
            else if(c[i]>96&&c[i]<123)
            s+=c[i]-96;
        }
        k=digit(s);
        s=0;
        for(i=0;i<strlen(d);i++)
        {
            if(d[i]>64&&d[i]<91)
            s+=d[i]-64;
            else if(d[i]>96&&d[i]<123)
            s+=d[i]-96;
        }
        l=digit(s);
        if(k>l)
        r=100.0*l/k;
        else
        r=100.0*k/l;
        printf("%.2lf",r);
        cout<<" %"<<endl;
    }
    return 0;
}
