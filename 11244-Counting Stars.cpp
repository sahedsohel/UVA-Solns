#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int k,l,i,j,s,t;
    while(1)
    {
        cin>>k>>l;
        if(k==0&&l==0)break;
        char a[k][l];
        for(i=0;i<k;i++)
        {
            for(j=0;j<l;j++)
            {
                cin>>a[i][j];
            }
        }
        t=0;
        for(i=0;i<k;i++)
        {
            for(j=0;j<l;j++)
            {
                if(a[i][j]=='*')
                {
                    s=0;
                    if(a[i+1][j]=='*'&&i+1>-1&&i+1<k&&j>-1&&j<l)s=1;
                    else if(a[i-1][j]=='*'&&i-1>-1&&i-1<k&&j>-1&&j<l)s=1;
                    else if(a[i][j+1]=='*'&&i>-1&&i<k&&j+1>-1&&j+1<l)s=1;
                    else if(a[i][j-1]=='*'&&i>-1&&i<k&&j-1>-1&&j-1<l)s=1;
                    else if(a[i+1][j+1]=='*'&&i+1>-1&&i+1<k&&j+1>-1&&j+1<l)s=1;
                    else if(a[i+1][j-1]=='*'&&i+1>-1&&i+1<k&&j-1>-1&&j-1<l)s=1;
                    else if(a[i-1][j+1]=='*'&&i-1>-1&&i-1<k&&j+1>-1&&j+1<l)s=1;
                    else if(a[i-1][j-1]=='*'&&i-1>-1&&i-1<k&&j-1>-1&&j-1<l)s=1;
                    if(s==0)
                        t++;
                }
            }
        }
        cout<<t<<endl;
    }
    return 0;
}

