#include<stdio.h>
#include<string.h>
#include<iostream>
#include<queue>
#include<stack>
using namespace std;

int main()
{
    stack< int >st[100];
    int i=0,j,x=1,m=0;
    char c[101];
    while(1)
    {
        scanf("%s",c);
        if(strcmp(c,"0")==0)break;
        else
        {
            if(m<strlen(c))m=strlen(c);
            for(j=0; j<strlen(c); j++)
                st[i].push(c[j]-48);
            i++;
        }
    }


    int s=0,k=0,l=0;
    stack< int > q;
    while(1)
    {
        x=0;
        for(j=0; j<i; j++)
        {
            if(st[j].empty()!=1)
            {
                s+=st[j].top();
                st[j].pop();
                x++;
            }
        }
        l++;
        q.push(s%10);
        s/=10;
        if(l==m){break;}
    }
    if(s>0)printf("%d",s);
    while( !q.empty() ) {
        cout << q.top(); // printing the top
        q.pop(); // removing that one
    }
    cout<<endl;
    return 0;
}

