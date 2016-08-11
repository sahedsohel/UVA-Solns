#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int i,k,t,l,c;
    char m;
    double sum;
    cin>>t;
    while(t--)
    {
        cin>>c;
        char a[c];
        int r[c];
        for(i=0;i<c;i++)
            cin>>a[i]>>r[i];

        cin>>l;
        sum=0;
        l++;
        while(l!=0)
        {
            scanf("%c",&m);
            if(m=='\n')l--;
            else
            {
                for(i=0;i<c;i++)
                {
                    if(a[i]==m){sum+=r[i];break;}
                }
            }
        }
        sum/=100.0;
        printf("%.2lf$\n",sum);
    }
    return 0;
}

