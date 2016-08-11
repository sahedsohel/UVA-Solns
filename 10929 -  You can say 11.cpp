#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    char a[1009];
    int i,j,l,s;
    while(1)
    {
        cin>>a;
        l=strlen(a);
        if(l==1&&a[0]==48)break;
        s=0;
        for(i=0;i<l;i++)
        {
            s=a[i]-48+s*10;
            s%=11;
        }
        cout<<a;
        if(s!=0)
            cout<<" is not a multiple of 11."<<endl;
        else
            cout<<" is a multiple of 11."<<endl;
    }
    return 0;
}
