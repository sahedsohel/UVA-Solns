#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int t,i;
    char c,a[128];
    cin>>t;
    getchar();
    while(t--)
    {
        i=0;
        while(1)
        {
            scanf("%c",&c);
            if(c=='\n')break;
            if(c=='(')
                a[i++]='(';
            else if(c=='{')
                a[i++]='{';
            else if(c=='[')
                a[i++]='[';
            else if(c==')')
            {
                if(a[i-1]=='(')
                    i--;
                else
                    a[i++]=')';
            }
            else if(c=='}')
            {
                if(a[i-1]=='{')
                    i--;
                else
                    a[i++]='}';
            }
            else if(c==']')
            {
                if(a[i-1]=='[')
                    i--;
                else
                    a[i++]=']';
            }
        }
        if(i==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
