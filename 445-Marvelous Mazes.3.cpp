#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    char s;
    int i,j,l,x,m;
    while(1)
    {
        vector< int > c;
        i=0;j=0;x=0;
        while(scanf("%c",&s)!=EOF)
        {
            if(s=='\n')
            {

                if(x==1)
                {
                    c.push_back(-2);
                    break;
                }
                else
                {
                    x=1;
                    i=0;
                    c.push_back(-1);
                    continue;
                }
            }
            else
            {
                c.push_back(s);
                x=0;
            }
        }
        if(c.size()==0)break;
        m=0;
        for(i=0; i<c.size(); i++)
        {
            if(c[i]==-2)
            {
                cout<<endl;
                break;
            }
            if(c[i]==33||c[i]==-1)
                cout<<endl;
            else if(c[i]>64||c[i]==42)
            {
                if(c[i]==98)
                for(j=0; j<m; j++)
                    printf(" ");
                else
                for(j=0; j<m; j++)
                    printf("%c",c[i]);
                m=0;
            }
            else if(c[i]>47)
            {
                m+=c[i]-48;
            }
        }
    }
    return 0;
}
