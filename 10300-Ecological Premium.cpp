#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int s,t,n,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        s=0;
        while(n--)
        {
            cin>>a>>b>>c;
            s+=a*c;
        }
        cout<<s<<endl;
    }
    return 0;
}
