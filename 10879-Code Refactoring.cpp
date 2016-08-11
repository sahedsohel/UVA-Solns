#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int m,n,t,i,j=0,x;
    cin>>t;
    while(t--)
    {
        cin>>m;
        j++;
        if(m==0)
        {
            cout<<"Case #"<<j<<": 0"<<endl;
            continue;
        }
        n=m,x=0,
        cout<<"Case #"<<j<<": "<<m;

        for(i=2; i*i<n; i++)
        {
            if(n%i==0)
            {
                cout<<" = "<<m/(n/i)<<" * "<<n/i;
                x++;
                if(x==2)break;
            }
            if(x==2)break;
        }
        cout<<endl;
    }
    return 0;
}
