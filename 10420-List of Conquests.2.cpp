#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    int t,i,j,k;
    cin>>t;
    char c,s[t][75],a[75];
    i=0;
    while(t--)
    {
        cin>>s[i++];
        while(1)
        if(getchar()=='\n')break;
    }
    for(j=0;j<i;j++)
    {
        for(k=j+1;k<i;k++)
        {
            if(strcmp(s[j],s[k])>0)
            {
                strcpy(a,s[k]);
                strcpy(s[k],s[j]);
                strcpy(s[j],a);
            }
        }
    }t=1;
    cout<<s[0];
    for(j=1;j<i;j++)
    {
        if(strcmp(s[j],s[j-1])>0)
        {cout<<" "<<t<<"\n"<<s[j];t=1;}
        else
            t++;
    }
    cout<<" "<<t<<endl;
    return 0;
}
